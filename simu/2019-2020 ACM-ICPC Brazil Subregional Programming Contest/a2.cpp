#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

const long double EPS = 1e-5;

ll m,n,k;
bool left(vector<vector<ll>> &g, ll v, vector<bool> &vis, vector<pair<pll,ll>> &circ){
    vis[v] = true;
    bool res = (circ[v].fst.fst - circ[v].snd <= 0 + EPS) || (circ[v].fst.snd + circ[v].snd  >= n - EPS);
    for(auto u : g[v]){
        if(!vis[u]){
            res = res || left(g,u,vis,circ);
        }
    }
    return res;
}

bool right(vector<vector<ll>> &g, ll v, vector<bool> &vis, vector<pair<pll,ll>> &circ){
    vis[v] = true;
    bool res = (circ[v].fst.fst + circ[v].snd >= m - EPS) || (circ[v].fst.snd - circ[v].snd  <= 0 + EPS);
    for(auto u : g[v]){
        if(!vis[u]){
            res = res || right(g,u,vis,circ);
        }
    }
    return res;
}


int main(){
    FIN;
    cin >> m >> n >> k;
    vector<pair<pll,ll>> circ(k);
    fore(i,0,k){
        cin >> circ[i].fst.fst >> circ[i].fst.snd >> circ[i].snd;
    }
    vector<vector<ll>> g(k);
    fore(i,0,k){
        fore(j,0,k){
            if(i==j) continue;
            long double x1 = circ[i].fst.fst, y1 = circ[i].fst.snd, x2 = circ[j].fst.fst, y2 = circ[j].fst.snd;
            long double dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
            if(dist - EPS <= (long double)(circ[i].snd + circ[j].snd)){
                g[i].pb(j);
                g[j].pb(i);
            }
        }
    }
    vector<bool> vis1(k), vis2(k);
    bool flag = true;
    fore(i,0,k){
        if(vis1[i]) continue;
        if(left(g,i,vis1,circ) && right(g,i,vis2,circ)) flag = false;
    }
    if(flag) cout << "S\n";
    else cout << "N\n";
    return 0;
}