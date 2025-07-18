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

int main(){

ll n,aux;
cin>>n;
vector<ll> v;
vector<ll> dp(n);

fore(i,0,n){
   cin>>aux;
   v.push_back(aux); 
}


dp[n-1]=0;

ll salto1=0;
ll salto2=0;
ll res=0;

fore(i,1,n){
    

    salto1=abs(v[n-i-1]-v[n-i])+dp[n-i];
    


    if(n-i+1<n && n-1-i>=0){
    salto2=abs(v[n-1-i]-v[n-i+1])+dp[n-i+1];
    }
    else{
        salto2=1e9;
    }

    
    dp[n-i-1]=min(salto1,salto2);
    res=min(salto1,salto2);



}    cout<<res;
}