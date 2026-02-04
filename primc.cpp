// primc.cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0; // expects: n m
    vector<vector<pair<int,ll>>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v; ll w;
        cin >> u >> v >> w; // 1-based input
        --u; --v;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<char> used(n, 0);
    vector<int> parent(n, -1);
    vector<ll> key(n, INF);  

    // min-heap: (key, node)
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    key[0] = 0;
    pq.push({0, 0});

    ll total = 0;
    vector<tuple<int,int,ll>> mst_edges;

    while (!pq.empty()) {
        auto [w, u] = pq.top(); pq.pop();
        if (used[u]) continue;
        used[u] = 1;
        total += w;
        if (parent[u] != -1) mst_edges.emplace_back(parent[u], u, w);

        for (auto &e : adj[u]) {
            int v = e.first; ll wt = e.second;
            if (!used[v] && wt < key[v]) {
                key[v] = wt;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // check connectivity
    for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            cout << "No MST exists (graph is disconnected)\n";
            return 0;
        }
    }

    cout << "Total weight: " << total << '\n';
    for (auto &t : mst_edges) {
        int u, v; ll w; tie(u, v, w) = t;
        cout << (u+1) << " " << (v+1) << " " << w << '\n'; // 1-based output
    }
    return 0;
}