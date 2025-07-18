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
ll t,n;
cin>>t;

fore(i,0,t){
    cin>>n;
    if(n==1 || (((n-2)%3)==2) ){
        cout<<"YES"<<"\n";
    }
    else{cout<<"NO"<<"\n";  }
}
}