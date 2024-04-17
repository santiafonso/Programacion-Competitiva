#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 

using namespace std;
typedef long long ll;


bool comp (pair<ll,ll> a,pair<ll,ll> b){              //sirve para el sort configuramos ocn lo quereemos ordenar
    if(a.first==b.first){return a.second<b.second;}
    return a>b;
}


int main(){
    ll n,k,x,y;
    cin>>n>>k;
    vector <pair<ll,ll>> v;
    fore(i,0,n){
        cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end(),comp);

ll res=0;
fore(i,0,v.size()){
    if((v[i].first==v[k-1].first) && (v[i].second==v[k-1].second))
    res=res+1;
}
cout<<res;
}