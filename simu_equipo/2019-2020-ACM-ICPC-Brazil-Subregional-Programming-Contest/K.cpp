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

//El Vasito is love, El Vasito is life

int main(){
    FIN;
    int n;
    cin>>n;
    if(n==1){
        show(2);
        return 0;
    }
    ll p2[n+1];//2**i
    p2[0]=1;
    fore(i,1,n+1){
        p2[i] = (p2[i-1]*2) % M;
    }
    ll borde[n+1];//formas de resolver para tamaño i arrancando desde un borde
    borde[0] = 0;
    borde[1] = 2;
    borde[2] = 12;
    fore(i,3,n+1){
        ll voyyvuelvo = p2[i-1];
        ll completo = borde[i-1];
        ll cruzado = (2*borde[i-2])%M;
        borde[i] = (2*((voyyvuelvo + completo + cruzado)%M))%M;
    }
    ll res = (2*borde[n])%M;
    fore(i,2,n){
        //sumo las formas de arrancar aca
        // voy y vuelvo izq
        ll formas1 = (p2[i-1]*borde[n-i]) % M;
        //viceversa
        ll formas2 = (p2[n-i]*borde[i-1]) % M;
        res = (res + (2*((formas1 + formas2)%M)%M))%M;
    }
    show(res);
    return 0;
}

//Sobrevivimos al pabellon