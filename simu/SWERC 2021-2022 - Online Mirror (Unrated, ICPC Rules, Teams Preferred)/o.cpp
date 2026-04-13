#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool blocked[25][720] = {}; // false = libre

    for (int i = 0; i < n; i++) {
        char t; cin >> t;
        if (t == 'C') {
            int r, a1, a2; cin >> r >> a1 >> a2;
            // Sentido horario: aumentar ángulo
            int a = a1;
            do {
                blocked[r - 1][2 * a] = true;
                a = (a + 1) % 360;
            } while (a != a2);
            blocked[r - 1][2 * a2] = true;
        } else { // 'S'
            int r1, r2, a; cin >> r1 >> r2 >> a;
            int pos = (2 * a + 1) % 720;
            for (int r = r1; r < r2; r++) {
                blocked[r - 1][pos] = true;
                // Caso especial: ángulo 0 -> también bloquear entre 359 y 0
                if (a == 0) blocked[r - 1][719] = true;
            }
        }
    }

    queue<pair<int,int>> q;
    bool vis[25][720] = {};
    q.push({0, 0});
    vis[0][0] = true;

    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        if (r == 20) {
            cout << "YES\n";
            return;
        }

        // Arriba, abajo, derecha, izquierda
        vector<pair<int,int>> moves = {
            {r + 1, c},
            {r - 1, c},
            {r, (c + 2) % 720},
            {r, (c + 718) % 720}
        };

        for (auto [nr, nc] : moves) {
            if (nr < 0 || nr > 20 || vis[nr][nc]) continue;
            bool ok = true;
            // subir
            if (nr == r + 1 && blocked[r][nc]) ok = false;
            // bajar
            if (nr == r - 1 && blocked[nr][nc]) ok = false;
            // girar derecha
            if (nc == (c + 2) % 720 && blocked[r][(c + 1) % 720]) ok = false;
            // girar izquierda
            if (nc == (c + 718) % 720 && blocked[r][(c + 719) % 720]) ok = false;

            if (ok) {
                vis[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
