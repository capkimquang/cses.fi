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
    ll rep = 1, max_ = 1, i = 1, j = 1;
    for (i = 0; i < input.length() - 1; ) {
        if (input[i] == input[i + 1]) {
            rep = 1; j = i + 1;
            while (input[j] == input[i]) {
                rep++; j++;
            }
            max_ = max(rep, max_);
            i += rep;
            continue;
        }
        i++;
    }

    cout << max_ << "\n";

    return 0;
}

