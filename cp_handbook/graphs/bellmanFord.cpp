#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using vi = vector<ll>;
using vvi = vector<vi>;

vi dist;
ll INF = 1e9 + 7;

void bellManFord(vector<tuple<ll, ll, ll>> & edges, ll src, ll n) {
    dist.assign(n + 1, INF);
    dist[src] = 0;
    ll t = n - 1;
    while (t--) {
        for (auto &[a, b, w] : edges) {
            dist[b] = min(dist[b], dist[a] + w);
        }
    }
}

int main() {
    vector<tuple<ll, ll, ll>> edges = {
        {1, 2, 5},
        {1, 3, 3},
        {1, 4, 7},
        {2, 1, 5},
        {2, 4, 3},
        {2, 5, 2},
        {3, 1, 3}, 
        {3, 4, 1},
        {4, 1, 7}, 
        {4, 2, 3},
        {4, 3, 1},
        {4, 5, 2},
        {5, 2, 2}, 
        {5, 4, 2}
    };

    ll n = 5, src = 1;
    
    bellManFord(edges, src, n);

    cout << "Shortest Dist from source (n = 1) : \n";
    for (ll i=1; i<=n; i++) {
        cout << "To " << i << ": " << dist[i] << endl;
    }

    return 0;
}