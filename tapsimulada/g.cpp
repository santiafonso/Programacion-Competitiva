#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7; // o 1e9+7


int main () {
    string st; cin >> st;

    ll Tt = 0, Aa = 0, Pp = 0, Uu = 0;
    fore(i,0,sz(st)) {
        if(st[i] == 'T') Tt++;
        if(st[i] == 'A') Aa++;
        if(st[i] == 'P') Pp++;
        if(st[i] == 'U') Uu++;
    }

    ll aux1 = min(Tt, Pp);
    ll aux2 = Aa + Uu;
    ll res = min(aux1, aux2);

    cout << res << "\n";
}