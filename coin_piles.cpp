#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 we have 2 provided value a and b.
 supposed:
    take21 = the number of times we take 2 from a and take 1 from b.
    take12 = the number of times we take 1 from a and take 2 from b.
 
 so we have this set of equation:
    | 2 * take21 + take12 = a
    | take21 + 2 * take12 = b
 
 solving this equation, we have:
    3 * take21 = 2 * a - b
    3 * take12 = 2 * b - a
 
 we check these conditions, if it's satisfy, it's a yes:
    take21 % 3 == 0
    take12 % 3 == 0
    take21 >= 0
    take12 >= 0
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    int testcase; cin >> testcase;
    for (int tc = 0; tc < testcase; tc++) {
        ll a, b; cin >> a >> b;
        
        ll take21 = 2 * a - b;
        ll take12 = 2 * b - a;
        (take21 % 3 == 0 && take12 % 3 == 0 && take21 >= 0 && take12 >= 0) ?
            cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}

