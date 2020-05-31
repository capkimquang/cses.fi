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
    int n = 0, x = 0; cin >> n;
    set<ll> input;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        input.insert(x);
    }
    
    cout << input.size() << "\n";
    
    return 0;
}

