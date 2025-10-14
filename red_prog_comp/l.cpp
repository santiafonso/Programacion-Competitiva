#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAX = 10005;

long long fact[MAX], invfact[MAX];

// Exponenciación rápida (para inversos modulares)
long long modpow(long long a, long long e) {
    long long res = 1;
    while (e > 0) {
        if (e & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return res;
}

// Precalcula factoriales y sus inversos
void init_factorials(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = (fact[i-1] * i) % MOD;

    invfact[n] = modpow(fact[n], MOD-2); // inverso módulo
    for (int i = n-1; i >= 0; i--)
        invfact[i] = (invfact[i+1] * (i+1)) % MOD;
}

// Calcula combinatoria C(n,r) mod MOD
long long C(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n-r] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    init_factorials(n + k + 5);

    long long ans = (C(n + k - 1, k - 1) - C(n - 1, k - 1)) % MOD;
    if (ans < 0) ans += MOD;

    cout << ans << "\n";
    return 0;
}
