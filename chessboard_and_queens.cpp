#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 we have this board below as an example for this solution
        0       1       2       3       4
 0  |       |       |       |       |       |
    +---------------------------------------+
 1  |       |       |       |       |       |
    +---------------------------------------+
 2  |       |       |       |       |       |
    +---------------------------------------+
 3  |       |       |       |       |       |
    +---------------------------------------+
 4  |       |       |       |       |       |
 
 for example, if we put a queen at position (0, 1), these following position will be block:
    row:            from (0, 0) to (0, 4)
    right diagonal: from (0, 1) to (3, 4)
    left diagonal:  from (0, 1) to (1, 0)
 
 for a n x n board, we have 2 * n - 1 right diagonal and 2 * n - 1 left diagonal.
 we will index these diagonal under the following rule:
    - for right diagonal:
        1: from (0, 4) to (0, 4)
        2: from (0, 3) to (1, 4)
        3: from (0, 2) to (2, 4)
        ... and so on.
        -----------------
        the index of right diagonal for a queen at (r, c) is n + r - c
    - for left diagonal:
        1: from (0, 0) to (0, 0)
        2: from (0, 1) to (1, 0)
        3: from (0, 2) to (2, 0)
        ... and so on.
        -----------------
        the index of left diagonal for a queen at (r, c) is r + c + 1
 so if we put a queen at position (r, c), these following position will be block:
        row[r]
        right_diagonal[n + r - c]
        left_diagonal[r + c + 1]
 
 using backtrack recursive method, we will block these row and diagonal once we put a queen on (r, c) and try to put the next queen.
 */

int ans = 0, n = 8;
char board[8][8];
bitset<30> row, rdiagonal, ldiagonal;

void backtrack(int c) {
    if (c == n) {
        ans++;
        return;
    }
    
    for (int r = 0; r < n; r++) {
        if (board[r][c] != '*'
            && !row[r]
            && !rdiagonal[n + r - c]
            && !ldiagonal[r + c + 1]) {
            row[r] = rdiagonal[n + r - c] = ldiagonal[r + c + 1] = true;
            backtrack(c + 1);
            row[r] = rdiagonal[n + r - c] = ldiagonal[r + c + 1] = false;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    
    backtrack(0);
    cout << ans << "\n";
    
    return 0;
}
