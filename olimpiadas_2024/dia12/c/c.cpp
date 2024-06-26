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

void bfs(ll v, vector<vector<ll>> &g,vector<ll> &prof) {
    vector<bool> vis(SZ(g),false);
    queue<ll> q;
    prof[v]=1;
    vis[v] = true;
    q.push(v);
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                prof[u]=prof[v]+1;
                //a.push_back(u);
                q.push(u);
            }
        }
    }

}
// ll dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis) {
//     vis[v] = true;
//     ll res=0;
//     for (ll u : g[v]) {
//         if (!vis[u]) {
//             res = max(res,dfs(u,g,vis));


//         }
//     }
//     return res+1;
// }


int main(){
    REGALO
    ll n;
    cin>>n;
    string a,b,c;
    map<string,ll> mp;
    vector<ll> prof(220,0);
    //vector<bool> vis (220,false);
    mp["POLYCARP"]=0;
    //ll a[n];
    ll aux=1;
    vector<vector<ll>> g(220);
    fore(i,0,n){
        cin>>a>>b>>c;

        for (int j = 0; j < a.length(); j++) {
            a[j] = toupper(a[j]);
        }

        for (int j = 0; j < c.length(); j++) {
            c[j] = toupper(c[j]);
        }

        if(mp.count(a)==0){
            mp[a]=aux;
            aux++;

        }

        if(mp.count(c)==0 ){
            mp[c]=aux;
            aux++;
        }
        g[mp[a]].push_back(mp[c]);
        g[mp[c]].push_back(mp[a]);
        // cout<<a<<'\n';
        // cout<<mp[a]<<'\n';
        // cout<<c<<'\n';
        // cout<<mp[c]<<'\n';
    }
    bfs(0,g,prof);
    //dfs(0,g,vis);
    sort(prof.begin(),prof.end());
    cout<<prof[prof.size()-1];
    
}