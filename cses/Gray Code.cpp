#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 1 << n;

    // recorrer por cantidad de unos
    for (int k = 0; k <= n; k++) {
        for (int mask = 0; mask < total; mask++) {
            if (__builtin_popcount(mask) == k) {
                // imprimir en formato binario de n bits
                for (int i = n - 1; i >= 0; i--) {
                    cout << ((mask >> i) & 1);
                }
                cout << '\n';
            }
        }
    }

    return 0;
}