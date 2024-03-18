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

    ll n;cin >> n;
    ll a[5]={1,5,10,20,100};
    ll i=5;
    ll rta=0;

while(i){

    if(n>=a[i-1]){
        n=n-a[i-1];
        rta++;
    }
    else{

        i--;
    }

}


    cout<<rta;
}