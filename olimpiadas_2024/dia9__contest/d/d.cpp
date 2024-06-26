#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.REGALObegin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 

using namespace std;
typedef long long ll;
ll n;
ll dp[2*100009];
ll filas[2*100009];

ll  f(ll x){
    if(x==n){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    if(x+filas[x]+1>n){
        dp[x]= 1+f(x+1);
    }
    if(x+filas[x]+1<=n){
        dp[x]=min (1+f(x+1),f(x+filas[x]+1));
    }   
    return dp[x];
    }


int main(){
    REGALO
    ll t;
    cin>>t;
    fore(i,0,t){
    
    ll h1;
    cin>>n;

    fore(i,0,2*100009){
        dp[i]=-1;
    }

    fore(i,0,n){
        cin>>h1;
        filas[i]=h1;
  
    }
    
cout<<f(0)<<"\n";
    }
    
}