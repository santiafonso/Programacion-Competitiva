#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;

    // __builtin_popcountll cuenta los bits en 1 en un long long
    int pop = __builtin_popcountll(N);

    // 2 elevado a la cantidad de bits en 1
    
    cout<<pop;
    
    //cout << (1LL << pop) << endl;

    return 0;
}
