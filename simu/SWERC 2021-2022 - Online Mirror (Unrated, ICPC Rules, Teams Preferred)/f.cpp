#include <bits/stdc++.h>
using namespace std;

struct Antenna {
    int l, r;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];

        vector<Antenna> ant(n + 1);
        for (int i = 1; i <= n; i++) {
            ant[i].l = i - p[i];
            ant[i].r = i + p[i];
        }

        vector<int> dist(n + 1, -1);
        dist[a] = 0;
        queue<int> q;
        q.push(a);

        set<int> leftSet, rightSet;
        for (int i = 1; i <= n; i++) {
            if (i < a) leftSet.insert(i);
            else if (i > a) rightSet.insert(i);
        }

        while (!q.empty()) {
            int i = q.front();
            q.pop();

            // buscar hacia la izquierda 
            auto it = leftSet.lower_bound(max(1, i - p[i]));
            while (it != leftSet.end() && *it < i) {
                int j = *it;
                if (ant[j].r >= i) {
                    dist[j] = dist[i] + 1;
                    q.push(j);
                    it = leftSet.erase(it); // quitar visitado
                } else ++it;
            }

            // buscar hacia la derecha
            it = rightSet.lower_bound(i + 1);
            while (it != rightSet.end() && *it <= min(n, i + p[i])) {
                int j = *it;
                if (ant[j].l <= i) {
                    dist[j] = dist[i] + 1;
                    q.push(j);
                    it = rightSet.erase(it);
                } else ++it;
            }
        }

        cout << dist[b] << "\n";
    }

    return 0;
}
