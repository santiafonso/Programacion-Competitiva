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
 

ll solve(ll a, ll b, ll k) {
    ll g = gcd(a, b);
    ll dx = a / g;
    ll dy = b / g;
    if (dx <= k && dy <= k) return 1;   
    return 2;   //sino uso (1,0) muchas veces y despues (0,1) lo ideal es cuando llego con cuadrados de tamaño justo?)
}

int main() {
    FIN;
    
    int t;
    cin >> t;
    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        cout << solve(a, b, k) << '\n';
    }
    return 0;
}
