#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 this is a top-down dynamic programming problem.
 call: dp[n] is the number of ways to make sum n by throwing 6 faces dice.
 
 this is computed by make sum of:
    dp[n - i] as i is the result of the last throw.
 */

const int mod = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    ll n; cin >> n;
    vi dp(n + 1, 0);
    
    dp[0] = 1; //base case
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] += dp[i - j];
            dp[i] %= mod;
        }
    }
    
    cout << dp[n] << "\n";
    return 0;
}

