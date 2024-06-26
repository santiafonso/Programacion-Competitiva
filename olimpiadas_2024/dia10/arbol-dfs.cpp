#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
#define SZ(x) ((ll) (x.size()))
using namespace std;
typedef long long ll;
vector<ll> a;
void dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis) {
    vis[v] = true;
    for (ll u : g[v]) {
        if (!vis[u]) {
            a.push_back(u);
            dfs(u, g, vis);

        }
    }
}



int main(){

ll n,v,u;

//cin>>n;

// vector<vector<ll>> arbol;
// vector<bool> vis (n,false);
// fore(i,0,n){

// cin>>u>>v;
// u--;
// v--;
// arbol[u].push_back(v);
// arbol[v].push_back(u);
// }
vector<vector<ll>> g = {
        {3, 4, 5},
        {2,5},
        {1, 4},
        {0},
        {0, 2},
        {0, 1}
    };

vector<bool> vis (5,false);
dfs(0,g,vis);
fore(i,0,n){
    cout<<a[i]<<'\n';
}
}