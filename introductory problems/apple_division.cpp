#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<int, int>

using namespace std;

/*
 we have n apples and m buckets, so we have m^n ways to put these apples into buckets.
 since there are only 2 buckets on this problem, we have 2^n = 1 << n ways.
 
 for each way, we will test if a bits is on, we put apple at that index in one bucket.
 then compare with the second bucket by total - one_bucket.
 */

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.
    ll n, p[23], total, assigned = 0, curr = 0, res = INT_MAX;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        total += p[i];
    }
    
    for (ll i = 0; i < 1 << n; i++) {
        assigned = 0;
        for (ll j = 0; j < n; j++) {
            if (i & 1 << j) {
                assigned += p[j];
            }
        }
        curr = abs((total - assigned) - assigned);
        res = min(res, curr);
    }
    
    cout << res << "\n";
    return 0;
}
