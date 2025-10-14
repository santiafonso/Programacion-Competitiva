#include <bits/stdc++.h>
using namespace std;

struct Sensor {
    int x, y, s;
};

int find(int x, vector<int>& parent) {
    if (parent[x] != x)
        parent[x] = find(parent[x], parent);
    return parent[x];
}

void unite(int a, int b, vector<int>& parent) {
    a = find(a, parent);
    b = find(b, parent);
    if (a != b) parent[a] = b;
}

bool intersect(const Sensor& a, const Sensor& b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    long long dist2 = dx * dx + dy * dy;
    long long r = a.s + b.s;
    return dist2 <= r * r;
}

int main() {
    int M, N, K;
    cin >> M >> N >> K;
    
    vector<Sensor> sensors(K);
    for (int i = 0; i < K; ++i) {
        cin >> sensors[i].x >> sensors[i].y >> sensors[i].s;
    }

    // Cada sensor es un nodo, agregamos 4 nodos extra: left, right, top, bottom
    int LEFT = K, RIGHT = K + 1, TOP = K + 2, BOTTOM = K + 3;
    vector<int> parent(K + 4);
    iota(parent.begin(), parent.end(), 0); // Inicializa DSU

    for (int i = 0; i < K; ++i) {
        const auto& s = sensors[i];
        // Chequear si toca algún borde
        if (s.x - s.s <= 0) unite(i, LEFT, parent);
        if (s.x + s.s >= M) unite(i, RIGHT, parent);
        if (s.y - s.s <= 0) unite(i, BOTTOM, parent);
        if (s.y + s.s >= N) unite(i, TOP, parent);
    }

    // Unir sensores que se solapan
    for (int i = 0; i < K; ++i) {
        for (int j = i + 1; j < K; ++j) {
            if (intersect(sensors[i], sensors[j])) {
                unite(i, j, parent);
            }
        }
    }

    // Si sensores conectan lado a lado, el ladrón no puede pasar
    if ((find(LEFT, parent) == find(RIGHT, parent)) ||
        (find(TOP, parent) == find(BOTTOM, parent))) {
        cout << "N\n";
    } else {
        cout << "S\n";
    }

    return 0;
}
