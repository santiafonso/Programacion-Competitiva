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

    int n; cin >> n;
    if(n>=2){
    fore(i,0,n-1){

        if(i%2==0){
            cout<< "I hate that ";
        }
        else{cout<< "I love that ";}
        
    }
        if(n%2==0){
            cout<<"I love ";
        }
        else{cout<<"I hate ";}
        cout<<"it";
        }

        if(n==1){cout<< "I hate it";}
}