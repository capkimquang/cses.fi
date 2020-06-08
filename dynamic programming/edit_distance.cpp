#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define vii vector<int, int>
#define vvi vector<vector<int>>
#define pii pair<int,int>

using namespace std;

/*
 this is a classic edit distance problem, which has many application in examine the similar in gene.
 denote memo[i][j] : minimum cost to make x[0:i] becomes y[0:j]
 
 we have three cases:
    case1: x[i] and a gap
        in this case, the cost is one (we can delete x[i] or add x[i] to the gap)
        so the cost from beginning to this postion is: memo[i][j - 1] + 1
    case2: y[i] and a gap
        in this case, the cost is one (we can delete y[i] or add y[i] to the gap)
        so the cost from beginning to this position is: memo[i - 1][j] + 1
    case3: x[i] and y[j]
        in this case, the cost is depend on whether x[i] == y[j] or not.
        if x[i] == y[j], we don't have to change because the character is already match.
        else, we either change x[i] to y[j] or y[j] to x[i], so the cost is 1.
        so the cost from beginning to this postion is: memo[i - 1][j - 1] + (x[i] != y[j])
 */
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, m;
    vvi memo(5007, vi(5007, 1e9));
    string x, y;
    
    cin >> x >> y;
    n = x.size(); m = y.size();
    memo[0][0] = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0) memo[i][j] = j;
            else if (j == 0) memo[i][j] = i;
            else {
                memo[i][j] = min(memo[i][j], memo[i - 1][j] + 1);
                memo[i][j] = min(memo[i][j], memo[i][j - 1] + 1);
                memo[i][j] = min(memo[i][j], memo[i - 1][j - 1] + (x[i - 1] != y[j - 1]));
            }
        }
    }
    
    cout << memo[n][m] << "\n";
    return 0;
}
