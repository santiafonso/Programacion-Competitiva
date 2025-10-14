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
#define ALL(s) s.begin(),s.end()
#define INF (1LL<<62)
using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//for i in {a..z};do cp template.cpp $i.cpp;done

bool solve(vector<ll> bolsas,ll C,ll T,ll t){
    ll lim = T*t,grupo=1,suma=0; // lim = max cantidad de pochoclos que puede comer cada competidor
    
    fore(i,0,SZ(bolsas)){
        if(bolsas[i]>lim) return false;
        if(suma+bolsas[i]>lim){
            grupo++;
            suma=0;
        }
        suma+=bolsas[i];
    }
    return grupo<=C;
}

int main(){
    FIN;
    ll N,C,T;
    cin>>N>>C>>T;
    vector <ll> bolsas(N);
    fore(i,0,N)cin>>bolsas[i];
    
    ll l=0,r=1e15,res=r;

    while(l<=r){
        ll m = (l+r)/2;
        if(solve(bolsas,C,T,m)){
            res=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<res<<'\n';
}