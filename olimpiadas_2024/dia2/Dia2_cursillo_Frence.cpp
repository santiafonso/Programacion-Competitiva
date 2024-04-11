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
    ll n,k,h;
    cin>>n>>k;
    ll a[n];
    fore(i,0,n){
        cin>>h;
        a[i]=h;  //arreglo de alturas
        
    }

    ll sumpar[n+1];
    sumpar[0]=0;
    
    fore(i,1,n+1){
        sumpar[i] = sumpar[i-1]+a[i-1];     //arreglo sumas parciales
    }
    sumpar[n+1]=sumpar[n]+a[n];


    ll aux = LLONG_MAX;
    ll res;
    ll i=0;
    while((i+k)<=n){
        
        if((sumpar[i+k]-sumpar[i])<aux){
            res=i;
        }

        aux=min(aux,sumpar[i+k]-sumpar[i]);
        
        i++;
    }
   cout<<res+1;
}