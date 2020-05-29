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
    while (n != 1) {
        cout << n << " ";
        if (n & 1) {
            n *= 3;
            n += 1;
        } else {
            n /= 2;
        }
    }
    
    cout << 1 << "\n";
    
    return 0;
}
