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
ll n,aux;
cin>>n;
ll a[n];

fore(i,0,n-1){
    cin>>aux;
    a[i]=aux;
}

std::sort(a,a+n-1);
   
if(a[0]!=1){
    cout<<1;
}   

else if(a[n-2]!=n){
    cout<<n;
}

else{
fore(i,0,n-2){
    if(a[i]+1!=a[i+1]){
        
        cout<<a[i]+1;
    }
}
}
}   