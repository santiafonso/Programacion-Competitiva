#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(a,b,c) for(int a=b; a<c; ++a)
using namespace std;
typedef long long ll;

ll solve(ll ind,ll g1,ll g2,vector<ll> v,ll N){
    //caso base
    if(ind==N){
        return abs(g1-g2);
    }
    ll elijo,noelijo;
    elijo=solve(ind+1,g1+v[ind],g2,v,N);
    noelijo=solve(ind+1,g1,g2+v[ind],v,N);
    return min(elijo,noelijo);
}

int main(){
    FIN;
    ll n,g1=0,g2=0;
    cin>>n;
    vector<ll> v(n);
    fore(i,0,n){
        cin>>v[i];
    }
    ll res = solve(0,g1,g2,v,n);
    cout<<res;
}
