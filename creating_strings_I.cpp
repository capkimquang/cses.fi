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
    string input; cin >> input;
    int count = 0;
    string res = "";
    
    sort(input.begin(), input.end());
    do {
        count++;
        res += input;
        res += "\n";
    } while (next_permutation(input.begin(), input.end()));
    
    cout << count << "\n" << res;
    return 0;
}

