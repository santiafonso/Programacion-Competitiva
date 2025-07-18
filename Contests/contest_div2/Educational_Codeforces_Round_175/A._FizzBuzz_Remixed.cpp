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
    ll n,t,aux;
    cin>>t;
    fore(i,0,t){
       cin>>n;

       aux=((n/15))*3;
        if(n%15==0){
            aux+=1;
        }
        else if(n%15==1){
            aux+=2;
        }
        else if(n%15>=2){
            aux+=3;
        }

        cout<<aux<<"\n";
        // cin>>n;
        // cout<<n%15*3+n%15+1;

    }

}
