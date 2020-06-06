#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 memo[i][j] : the number of cut so that the rectangle become seperate squares.
 
 if i equals j, we don't have to cut since it's already a square.
 else,
    we try to cut both horizontal and vertical way by iterating through 1 to n - 1 (as n is the number of row or column)
    and find the minimum result.
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int a, b, tmp;
    int memo[507][507];
    
    cin >> a >> b;
    for (int i = 0; i <= a; i++) {
        for (int j = i; j <= b; j++) {
            if (i == j) memo[i][j] = 0;
            else  {
                memo[i][j] = 1e9;
                for (int pos = 1; pos < i; pos++)
                    memo[i][j] = min(memo[i][j], memo[pos][j] + memo[i - pos][j] + 1);
                for (int pos = 1; pos < j; pos++)
                    memo[i][j] = min(memo[i][j], memo[i][pos] + memo[i][j - pos] + 1);
                
            }
        }
    }
    
    cout << memo[a][b] << "\n";
    return 0;
}

