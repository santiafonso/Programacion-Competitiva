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

int main(){
    ll n,m,a,b;
    cin>>n>>m;
    vector<vector<ll>> g(n);
    fore(i,0,m){

        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    ll res=0;
    fore(i,0,n){
        res=g[i].size()+res;
    }
    cout<<res;
}