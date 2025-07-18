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
ll dp[2][100009];
ll filas[2][100009];

ll  f(ll x,ll y){
    if(x==0){
        return filas[y][0];
    }
    if(dp[y][x]!=-1){
        return dp[y][x];
    }
    else{
        dp[y][x]=max(f(x-1,y),f((x-1),(y+1)%2)+filas[y][x]);
    return dp[y][x];
    }
}

int main(){
    REGALO
    ll h1;
    cin>>n;
    fore(i,0,100009){
        dp[0][i]=-1;
        dp[1][i]=-1;
    }

   
    fore(i,0,n){
        cin>>h1;
        filas[0][i]=h1;
    }

    fore(i,0,n){
        cin>>h1;
        filas[1][i]=h1;
  
    }



    
    
    //fore(j,2,n){
        
        //dp[j][0]=max(dp[j-1][1]+fila1[j],dp[j-2][1]+fila1[j]);
        //dp[j][1]=max(dp[j-1][0]+fila2[j],dp[j-2][0]+fila2[j]);
        //check
        //cout<<"el dp en "<<j<<"[0]"<<" es"<<dp[j][0]<<"\n";
        //cout<<"el dp en "<<j<<"[1]"<<" es"<<dp[j][1]<<"\n";
        
 
  //}

cout<<max(f(n-1,0),f(n-1,1));

}