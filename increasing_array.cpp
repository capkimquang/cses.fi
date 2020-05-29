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
    ll n; cin >> n;
    ll x[n + 5];
    for (int i = 0; i < n; i++) cin >> x[i];
    
    ll tmp = x[0];
    ll res = 0;
    for (int i = 1; i < n; i++) {
        if (tmp > x[i]) res += tmp - x[i];
        else tmp = x[i];
    }
    
    cout << res << "\n";
    
    return 0;
}

