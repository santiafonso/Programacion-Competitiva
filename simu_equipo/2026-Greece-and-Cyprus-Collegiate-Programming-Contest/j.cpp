#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define fore(a,b,c) for(int a=b; a<c; ++a)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(a) ((int)a.size())
#define fst first
#define snd second
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAXN 200005
#define ALPH 26
#define M 1000000007
#define MAXINT (1<<30)
#define MAXll (1ll<<60)
#define PI 3.141592653
using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main(){
FIN;
ll res=0,capacidad,n;
cin>>n>>capacidad;
vector<ll> pasillo(n+2);

ll aux;
fore(i,0,n){
    cin>>pasillo[i+1]; //emepzamos en 1
}


fore(i,0,n){

    if(pasillo[n-i]%capacidad>=1){  //techo!

    res+=2*(n-i)* (pasillo[n-i]/capacidad + 1); //cantidad de viajes
    pasillo[n-i-1]-=capacidad-(pasillo[n-i]%capacidad); //pasamos los que no

    }
    else{
        if(pasillo[n-i]<0){
            pasillo[n-i-1]+=pasillo[n-i]; //si lo que arrastamos nos queda negativo pasa a la siguiente puerta
        }
        res+=2*(n-i)*(pasillo[n-i]/capacidad);
    }
}
cout<<res;

}
