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


int main(){
    REGALO
    ll n,h1;
    vector<ll> fila1;
    vector<ll> fila2;
    cin>>n;
    fore(i,0,n){
        cin>>h1;
        fila1.push_back(h1);
  
    }
    fore(i,0,n){
        cin>>h1;
        fila2.push_back(h1);
  
    }


    //dp de mis 2 filas igual a vacation
    ll dp[n][2];

    dp[0][0]=fila1[0];
    dp[0][1]=fila2[0];
    dp[1][0]=fila1[1]+fila2[0];
    dp[1][1]=fila2[1]+fila1[0];
    //check 
    //cout<<dp[0][0]<<"\n"<<dp[0][1]<<"\n"<<dp[1][0]<<"\n"<<dp[1][1];
    
    
    fore(j,2,n){
        
        dp[j][0]=max(dp[j-1][1]+fila1[j],dp[j-2][1]+fila1[j]);
        dp[j][1]=max(dp[j-1][0]+fila2[j],dp[j-2][0]+fila2[j]);
        //check
        //cout<<"el dp en "<<j<<"[0]"<<" es"<<dp[j][0]<<"\n";
        //cout<<"el dp en "<<j<<"[1]"<<" es"<<dp[j][1]<<"\n";
        
 
  }

cout<<max(dp[n-1][0],dp[n-1][1]);

}