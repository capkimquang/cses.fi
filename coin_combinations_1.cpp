#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
this is a top-down dynamic programming problem.
call: dp[n] is the number of ways to make sum n by choosing coin.

this is computed by make sum of:
   dp[n - c[i]] as c[i] is the last coin we chose.
*/

const int mod = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, x;
    vi c(1000006), memo(1000006, 0);
    
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> c[i];
    
    memo[0] = 1;
    for (int i = 1; i <= x; i++)
        for (int j = 0; j < n; j++)
            if (i - c[j] >= 0) {
                memo[i] += memo[i - c[j]];
                memo[i] %= mod;
            }
        
    cout << memo[x] << "\n";
    
    return 0;
}
