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
    
    if (n == 1) cout << 1 << "\n";
    else if (n <= 3) cout << "NO SOLUTION\n";
    else if (n >= 4) {
        for (int i = 2; i <= n; i += 2) cout << i << " ";
        for (int i = 1; i <= n; i += 2) cout << i << " ";
        cout << "\n";
    }
    
    return 0;
}

