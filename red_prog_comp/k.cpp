#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
    bool operator<(const Edge &other) const {
        return w < other.w;
    }
};

struct DSU {
    vector<int> parent, sz, guard;
    DSU(int n) {
        parent.resize(n+1);
        sz.assign(n+1, 1);
        guard.assign(n+1, -1); // -1 = sin guardia asignado
        for(int i=1; i<=n; i++) parent[i] = i;
    }

    int find(int x) {
        return (parent[x] == x ? x : parent[x] = find(parent[x]));
    }

    bool unite(int a, int b, int &cost, int w) {
        a = find(a); b = find(b);
        if(a == b) return false;

        // si ambos ya tienen guardia asignado → conflicto, no se pueden unir
        if(guard[a] != -1 && guard[b] != -1) return false;

        if(sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];

        // Propagar guardia si existía
        if(guard[a] == -1) guard[a] = guard[b];

        cost += w;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, g;
    cin >> n >> r >> g;

    vector<Edge> edges(r);
    for(int i=0; i<r; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    vector<vector<int>> subsets(g);
    for(int i=0; i<g; i++) {
        int k; cin >> k;
        subsets[i].resize(k);
        for(int j=0; j<k; j++) cin >> subsets[i][j];
    }

    // Inicializar DSU
    DSU dsu(n);

    // Asignar guardias a sus posibles pueblos (de momento solo marcamos uno permitido)
    for(int i=0; i<g; i++) {
        for(int v: subsets[i]) {
            // Si aún no tiene guardia este pueblo → asignamos
            if(dsu.guard[v] == -1) dsu.guard[v] = i;
        }
    }

    sort(edges.begin(), edges.end());
    int cost = 0;

    for(auto &e : edges) {
        dsu.unite(e.u, e.v, cost, e.w);
    }

    // Verificar si tenemos g componentes válidos
    set<int> comps;
    for(int i=1; i<=n; i++) {
        comps.insert(dsu.find(i));
    }

    if((int)comps.size() != g) {
        cout << -1 << "\n";
    } else {
        cout << cost << "\n";
    }

    return 0;
}
