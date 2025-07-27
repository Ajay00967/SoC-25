#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

const int N = int(1e9);

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        adj[a].push_back({b, c});
    }

    vi dist(n, N);
    dist[0] = 0;
    vector<bool> vis(n, false);

    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int a = q.front(); q.pop();
        for (auto [b, c] : adj[a]) {
            if (vis[b]) continue;
            vis[b] = true;
            dist[b] = min(dist[b], dist[a] + c);
            q.push(b);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << dist[i] << " \n"[i+1 == n];
    }

    return 0;
}