#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;

void dfs(vvi adj, vb vis, int x) {
    if (vis[x]) return;
    vis[x] = true;
    // Some Work
    for (auto u : adj[x]) {
        dfs(adj, vis, u);
    }
}

void bfs(vvi adj, vb & vis, vi & dist, int x) {
    queue<int> q;
    vis[x] = true;
    dist[x] = 0;
    q.push(x);

    while (!q.empty()) {
        int s = q.front(); q.pop();

        for (auto u : adj[s]) {
            if (vis[u]) continue;
            vis[u] = true;

            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}

int main() {
    vvi adj(6);
    adj[0] = {1, 3};
    adj[1] = {2, 4};
    adj[2] = {1, 4, 5};
    adj[3] = {0};
    adj[4] = {1, 5};
    adj[5] = {2, 4};

    
    vi dist(6, 0);
    vb vis(6, false);
    bfs(adj, vis, dist, 0);

    for (int i = 0; i < 6; i++) {
        cout << i << " " << dist[i] << endl;
    }

    return 0;
}