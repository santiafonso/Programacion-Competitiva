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

ll n,aux,k;
cin>>n;
cin>>k;
vector<ll> v;
vector<ll> dp(n);

fore(i,0,n){
   cin>>aux;
   v.push_back(aux); 
}


dp[n-1]=0;

ll salto1=0;
ll res=0,minimosalto100=1e9;

fore(i,1,n){
          minimosalto100=1e9;
    fore(j,0,k){

      if(n-i+j<n){
        salto1=abs(v[n-i-1]-v[n-i+j])+dp[n-i+j];
      }
      else{
        salto1=1e9;
      }
    minimosalto100=min(minimosalto100,salto1);
        //cout<<"del salto:"<<j<<" el minsalto es: "<<minimosalto100<<" el dp de n-i+j es: "<<dp[n-i+j]<<"\n";
    }

    dp[n-i-1]=minimosalto100;
    //cout<<"DP en es:"<<dp[n-i-1]<<"\n";
}
    /*fore(i,0,n){
      cout<<dp[i]<<"\n";
    }*/
    res=dp[0];

    cout<<res;
}