#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 for a n x n board, we have n columns and n rows.
 when two knights are threating each other, they form a 3 x 2 or 2 x 3 board. so it's basically the solution for this problem is:
    ways to put two knights that are able to threat each other in a 3 x 2 or 2 x 3 board * number of 2 x 3 and 3 x 2 board in n x n board.
 
 1, in each 2 x 3 (or 3 x 2) board, we have two ways to put two knights so that they threat each other:
        pos(1, 1) and pos(3, 2)
        pos(1, 2) and pos(3, 1)
 
 2, in n blocks, we have n - 1 ways to choose 2 continuous blocks.
    in n blocks, we have n - 2 ways to choose 3 continuous blocks.
    in n x n board, we have (n - 1) * (n - 2) ways to choose 2 x 3 board.
    -> 2 * (n - 1) * (n - 2) way to choose 2 x 3 or 3 x 2 board.
 
 -> 2 * 2 * (n - 1) * (n - 2) ways to put two knights so that they threat each other.
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    ull n; cin >> n;
    for (ull i = 1; i <= n; i++) {
        ull res = i * i * (i * i - 1) * 0.5 - 4 * (i - 1) * (i - 2);
        cout << res << "\n";
    }
    
    return 0;
}

