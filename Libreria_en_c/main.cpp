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
    
    ll a[n];
    fore(i,0,n){
        cin >> a[i];
    } 

    ll sump[n+1];
    
    sump[0]=0;

    fore(i,0,n){
        sump[i+1]=sump[i]+a[i]; //esto es igual summp[i]=sump[i-1]+a[i-1] y que i arranque en 1

    }

    sort(a,a+n);    //ordena todo lo que este desde el puntero a hasta a+n

    ll sump2[n+1];

       fore(i,0,n){
        sump2[i+1]=sump2[i]+a[i];

    }

    int m; cin>>m;
    while(m--){

        int ty,l,r; cin >> ty >> l >> r;
        l--;
        if(ty==1){
            cout << sump[r]-sump[l]<< "\n";
        }else{
                cout << sump2[r]-sump2[l]<< "\n";
        }
    }


    return 0;

}