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

typedef pair<ll, ll> ii;

ll INF = 1e18;

auto dijkstra(ll start, vector<vector<ii>> &g) {
    vector<ll> dist(SZ(g), INF), pre(SZ(g), -1);
    dist[start] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [d_v, v] = pq.top();
        pq.pop();

        if (d_v != dist[v])
            continue;

        for (auto [to, len] : g[v])
            if (dist[v] + len < dist[to]) {
                dist[to] = dist[v] + len;
                pre[to] = v;
                pq.push({dist[to], to});
            }
    }
    return pair(dist, pre);
}

int main(){
ll aux1,aux2,peso,n,m;
cin>>n>>m;
vector<vector<ii>> g(n);
fore(i,0,m){

cin>>aux1>>aux2>>peso;
aux1--;
aux2--;
g[aux1].push_back({aux2,peso});
g[aux2].push_back({aux1,peso});

}

pair<vector<ll> , vector<ll>> res= dijkstra(0,g);
vector<ll> aux3;



ll i=res.second[n-1];
if(res.second[n-1]!=-1){
    aux3.push_back(n);
    while(i!=0){
        aux3.push_back(i+1);
        
        i=res.second[i];
    }   
    aux3.push_back(1);
    reverse(aux3.begin(),aux3.end());
    fore(i,0,aux3.size()){
        cout<<aux3[i]<<'\n';
    }
}
else{cout<<-1;}

//el que le precede al ultimo elemento
//ll aux = res.second[n-1];

// fore(i,0,res.second.size()){
//     imprimo quien le precede
//     cout<<res.second[aux]+1<<'\n';
//     me fijo el que le precede del
//     aux=res.second[aux]-1;
// }
}