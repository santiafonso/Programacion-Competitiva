#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(a,b,c) for(int a=b; a<c; ++a)
#define all(a) a.begin(),a.end()
#define SZ(a) ((int)a.size())
#define fst first
#define snd second
#define INF (1LL<<62)
using namespace std;
typedef long long ll;

int main() {
    FIN;
    ll n;
    cin >> n;

    ll minimo = LLONG_MAX, maximo = 0, sum = 0;

    fore(i, 0, n - 1) {
        ll x;
        cin >> x;
        sum += x;
        minimo = min(minimo, x);
        maximo = max(maximo, x);
    }

    ll esperado = (2 * minimo + n - 1) * n / 2;
    ll falta = esperado - sum;

    if (falta >= minimo && falta <= minimo + n - 1) {
        cout << falta << "\n";
    } else {
        ll esperado2 = (2 * maximo - n + 1) * n / 2;
        falta = esperado2 - sum;
        cout << falta << "\n";
    }

    return 0;
}
