#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

const int mod = 1e9 + 7;

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int n; cin >> n;
    int res = 1;
    
    for (int i = 0; i < n; i++)
        res = res % mod + res % mod;
    
    cout << res % mod << "\n";
    
    return 0;
}
