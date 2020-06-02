#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

const int mod = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, memo[1007][1007];
    char grid[1007][1007];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '*') memo[i][j] = 0;
            else if (i == 0 && j == 0) memo[i][j] = 1;
            else {
                memo[i][j] = (memo[i - 1][j] % mod + memo[i][j - 1] % mod) % mod;
            }
        }
    }
    
    cout << memo[n - 1][n - 1] << "\n";
    return 0;
}

