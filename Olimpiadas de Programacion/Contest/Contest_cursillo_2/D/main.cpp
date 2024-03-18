#include <bits/stdc++.h> 
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); //mas rapido las lecturas y escrituras SIEMPRE USAR "\n" ej: cout<<"\n"

using namespace std;
typedef long long ll;

int main(){

    ll n,x,i=1;cin >> n;
    ll a[n];    
    pair<ll,ll> sum[n+1];

    
    fore(i,0,n){

        cin>>x;
        a[i]=x;
    }
    sum[0]={0,0};
    fore(i,0,n){

        sum[i+1]={a[i]+sum[i].first,i+1};

    }
    
    while(i){

        

    }

}