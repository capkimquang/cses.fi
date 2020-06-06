#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 memo[l][r] = the different between the score of player1 and player2 (player1 - player2) in the interval (l, r)
 so at the beginning, when we compute the sum of x (player1 + player2),
 the answer for this problem is (sum + memo[0][n - 1]) / 2
 
 also notice that memo[l][r] is the different between the scores in a condition
 that player1 play first -> if player2 play first, the different is -memo[l][r]
 
 as l = r, memo[l][r] = x[l] or x[r] as there is only one element in the interval
 else, we calculate two option:
    choose the first element: the first player will earn x[l] score, the different
        now become x[l] - memo[l + 1][r] since element in position l is choosen and
        player2 plays first in the new interval (l + 1, r)
    choose the last element: the first player will earn x[r] score, and the different
        now become x[r] - memo[l][r - 1] for the same reason mentioned in the first option.
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n;
    ll sum, x[10007], memo[5007][5007];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum += x[i];
    }
    
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) memo[l][r] = x[l];
            else {
                memo[l][r] = max(x[l] - memo[l + 1][r], x[r] - memo[l][r - 1]);
            }
        }
    }
    
    cout << (sum + memo[0][n - 1]) / 2 << "\n";
    return 0;
}

