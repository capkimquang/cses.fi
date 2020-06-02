#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 using memo[sum] as the memorize table of minimum coin that can make sum.
 we have the base case of memo[0] = 0.
 
 supposed the last coin we add is denoted by last_coin, we will have memo[sum - last_coin]
 to get the value sum - last_coin and one more for last_coin.
 
 in general, we can develop the dynamic programming algorithms by these following:
    memo[0] = 0;
    memo[sum] = min(memo[i], memo[sum - last_coin]) + 1 with last_coin is every coin in the set of given coin
 
 for example:
    with the test case:
        3 11
        1 5 7
    
    memo[0] = 0;
    memo[1] = min(memo[1], memo[1 - 1]) + 1; which is min(1e9, memo[0]) + 1 -> memo[1] = 1;
    memo[2] = min(memo[2], memo[2 - 1]) + 1; which is min(1e9, memo[1]) + 1 -> memo[2] = 2;
    ... same for memo[3] and memo[4];
    memo[5] = min(memp[5], memo[5 - 1], memo[5 - 5]) + 1; which is min(1e9, 4, 0) + 1 -> memo[5] = 1;
    ... and so on.
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, x;
    vi c(1000006), memo(1000006, 1e9 + 7);
    
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> c[i];
    
    memo[0] = 0;
    for (int i = 1; i <= x; i++)
        for (int j = 0; j < n; j++)
            if (i - c[j] >= 0) memo[i] = min(memo[i], memo[i - c[j]] + 1);
        
    cout << (memo[x] == 1e9 + 7 ? -1 : memo[x]) << "\n";
    
    return 0;
}

