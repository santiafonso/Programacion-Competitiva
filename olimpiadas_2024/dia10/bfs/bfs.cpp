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
void bfs(ll v, vector<vector<ll>> &g) {
    vector<bool> vis(SZ(g));
    queue<ll> q;
    vis[v] = true;
    q.push(v);
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                a.push_back(u);
                q.push(u);
            }
        }
    }
}




int main(){

ll n=5,v,u;

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
        {1, 3},
        {0, 2, 4},
        {1, 4},
        {0},
        {1, 2}

    };

//vector<bool> vis (5,false);
bfs(0,g);
fore(i,0,n){
    cout<<a[i]<<'\n';
}
}