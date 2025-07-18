#include <bits/stdc++.h> 
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); //mas rapido las lecturas y escrituras SIEMPRE USAR "\n" ej: cout<<"\n"
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; }

using namespace std;
typedef long long ll;

int main(){
ll n,aux1,aux2;
cin>>n;
vector<ll> a;
vector<ll> b;

if((((n*(n+1))/2))%2!=0){
    cout<<"NO"<<"\n";
}
else{
    aux1=((n*(n+1))/2)/2;
    aux2=((n*(n+1))/2)/2;
    
    while(n>0){
        if(aux1-n>=0){
            a.push_back(n);
            aux1=aux1-n;
            n--;
        }
        else{
            b.push_back(n);
            aux2=aux2-n;
            n--;
        }
    }
    cout<<"YES"<<"\n";
    cout<<a.size()<<"\n";
    imp(a);
    cout<<"\n"<<b.size()<<"\n";
    imp(b);
    

}
}