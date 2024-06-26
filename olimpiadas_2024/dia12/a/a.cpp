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

ll t,n,aux,ai,bi;
vector<pair<ll,ll>> v;
cin>>t;
fore(i,0,t){
v.clear();
    cin>>n;
    fore(j,0,n){
        cin>>ai>>bi;
        if(ai<=10){
            v.push_back({bi,j});//quality indice
        }
    }
sort(v.begin(),v.end());
ll res=v[v.size()-1].second+1;
cout<<res<<'\n';
}

}