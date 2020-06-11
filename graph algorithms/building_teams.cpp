#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define vi vector<int>
#define vii vector<int, int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define qi queue<int>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //code starts here.

    int n, m, a, b; cin >> n >> m;
    vvi adj(n);

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool isBiparted = true;
    vi color(n);

    for (int i = 0; i < n; i++) {
        if (!color[i]) {
            qi q; q.push(i);
            color[i] = 1;
            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (int v : adj[u]) {
                    if (!color[v]) {
                        color[v] = color[u] % 2 + 1;
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        isBiparted = false;
                        break;
                    }
                }
            }
        }
    }

    if (!isBiparted) cout << "IMPOSSIBLE\n";
    else for (int i : color) cout << i << " ";
    return 0;
}
