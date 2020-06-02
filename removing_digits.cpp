#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n, digit;
    vi memo(1000007, 1e9 + 7);
    
    cin >> n;
    
    memo[0] = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp != 0) {
            digit = tmp % 10; tmp /= 10;
            memo[i] = min(memo[i], memo[i - digit] + 1);
        }
    }
    
    cout << memo[n] << "\n";
    
    return 0;
}

