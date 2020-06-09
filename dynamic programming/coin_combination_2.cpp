#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>
#define vvi vector<vector<int>>

using namespace std;

const int mod = 1e9 + 7;
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, x; cin >> n >> x;
    vi c(n + 5); for (int i = 0; i < n; i++) cin >> c[i];
    
    vvi memo(n + 5, vi(x + 5, 0));
    memo[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            memo[i][j] = memo[i - 1][j];
            if (j - c[i - 1] >= 0) {
                memo[i][j] += memo[i][j - c[i - 1]];
                memo[i][j] %= mod;
            }
        }
    }

    cout << memo[n][x] << "\n";
    
    return 0;
}
