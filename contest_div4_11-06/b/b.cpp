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
    REGALO
ll n,h;
ll a,res,aux,resdef,sum,b;
cin>>n;
fore(i,0,n){
cin>>a;
res=0;
fore(j,2,a+1){
    aux=0;
    h=1;
    sum=0;
    while(aux*j<=a){
       aux++;
       sum=sum+(aux*j);
    }
    sum=sum-(aux*j);
    if(sum>=res){
        res=sum;
        resdef=j;
    }
    
}
cout<<resdef<<"\n";
}
}