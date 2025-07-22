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
 
int main() {
    FIN;
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cntT = 0, cntF = 0, cntN = 0;
        string others;

        for (char c : s) {
            if (c == 'T') cntT++;
            else if (c == 'F') cntF++;
            else if (c == 'N') cntN++;
            else others += c;
        }
        string res(cntT, 'T');
        res += string(cntF, 'F');
        res += string(cntN, 'N');
        res += others;

        cout << res << '\n';
    }
    return 0;
}
