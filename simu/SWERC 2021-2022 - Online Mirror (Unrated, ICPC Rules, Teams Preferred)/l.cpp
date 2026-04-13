#include <bits/stdc++.h>
using namespace std;
//tutorial
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long v;
    cin >> n >> v;
    vector<long long> t(n), a(n);
    for (auto &x : t) cin >> x;
    for (auto &x : a) cin >> x;

    vector<pair<long long, long long>> pts;

    for (int i = 0; i < n; i++) {
        if (abs(a[i]) <= v * t[i]) {
            long long x = v * t[i] - a[i];
            long long y = v * t[i] + a[i];
            pts.push_back({x, y});
        }
    }

    sort(pts.begin(), pts.end());  // por x, luego por y

    vector<long long> lis;
    for (auto [x, y] : pts) {
        auto it = upper_bound(lis.begin(), lis.end(), y);
        if (it == lis.end()) lis.push_back(y);
        else *it = y;
    }

    cout << lis.size() << "\n";
}
