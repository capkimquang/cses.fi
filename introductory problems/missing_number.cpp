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
    ll elements;
    bool pigeonhole[n];
    
    for (int i = 1; i <= n; i++)
        pigeonhole[i] = false;
    
    for (int i = 1; i < n; i++) {
        cin >> elements;
        pigeonhole[elements] = true;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!pigeonhole[i]) {
            cout << i << "\n";
            break;
        }
    }
 
    return 0;
}

