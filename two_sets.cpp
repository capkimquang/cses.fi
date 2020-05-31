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
    int n;
    vi set1, set2;
    ll total = 0, total1 = 0, total2 = 0;
    
    cin >> n;
    
    total = 0.5 * n * (n + 1);
    if (total % 2 == 0) {
        cout << "YES\n";
        for (int i = n; i > 0; i--) {
            if (total1 >= total2) {
                total2 += i;
                set2.push_back(i);
            } else {
                total1 += i;
                set1.push_back(i);
            }
        }
        
        cout << set1.size() << "\n";
        for (auto element: set1) cout << element << " ";
        cout << "\n";
        
        cout << set2.size() << "\n";
        for (auto element: set2) cout << element << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}

