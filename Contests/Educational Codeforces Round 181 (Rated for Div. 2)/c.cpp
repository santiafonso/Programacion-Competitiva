#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define fore(a,b,c) for(int a=b; a<c; ++a)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(a) ((int)a.size())
#define fst first
#define snd second
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAXN 200005
#define ALPH 26
#define M 1000000007
#define MAXINT (1<<30)
#define MAXll (1ll<<60)
#define PI 3.141592653
#define ALL(s) s.begin(),s.end()
#define INF (1LL<<62)
using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
 
ll count_bad(ll x) {
    vector<int> primes = {2, 3, 5, 7};
    int n = primes.size();
    ll total = 0;

    for (int mask = 1; mask < (1 << n); ++mask) {
        ll prod = 1;
        int bits = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                if (prod > x / primes[i]) {
                    prod = x + 1; 
                    break;
                }
                prod *= primes[i];
                ++bits;
            }
        }
        if (prod > x) continue;

        ll cnt = x / prod;
        if (bits % 2 == 1) total += cnt;
        else total -= cnt;
    }
    return total;
}

ll count_good(ll l, ll r) {
    return (r - l + 1) - (count_bad(r) - count_bad(l - 1));
}

int main() {
    FIN;
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(l, r) << '\n';
    }
}
