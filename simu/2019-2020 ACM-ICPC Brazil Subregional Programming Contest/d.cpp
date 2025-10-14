#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> tree(n + 1);
    vector<int> parent(n + 1, -1);

    for (int i = 2; i <= n; ++i) {
        cin >> parent[i];
        tree[parent[i]].push_back(i);
    }

    // Calcular profundidad de cada nodo desde el jefe (1)
    vector<int> depth(n + 1, 0);
    function<void(int, int)> dfs = [&](int u, int d) {
        depth[u] = d;
        for (int v : tree[u]) {
            dfs(v, d + 1);
        }
    };
    dfs(1, 0);

    // Ordenamos nodos por profundidad descendente
    vector<int> nodes(n - 1);
    iota(nodes.begin(), nodes.end(), 2); // de 2 a n
    sort(nodes.begin(), nodes.end(), [&](int a, int b) {
        return depth[a] > depth[b];
    });

    vector<bool> arrested(n + 1, false);
    int total = 0, used = 0;

    for (int node : nodes) {
        if (used == k) break;
        if (arrested[node]) continue;

        // Interrogamos este nodo y subimos arrestando
        int u = node;
        int count = 0;
        while (u != -1 && !arrested[u]) {
            arrested[u] = true;
            ++count;
            u = parent[u];
        }

        total += count;
        ++used;
    }

    cout << total << "\n";
    return 0;
}
