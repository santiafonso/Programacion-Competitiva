#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
#define SZ(x) ((ll) (x.size()))
using namespace std;
typedef long long ll;

const ll MOD = 10E9 + 7;
ll x;

ll add(ll a,ll b){
    a+=b;
    if(a>=MOD){
        a-=MOD;
    }
    return a;
    }

ll sub(ll a,ll b){
    a-=b;
    if(a<0){
        a+=MOD;
    }
    return a;
}

ll mul(ll a,ll b){

    return a*b%MOD;

}

ll elevar(ll b,ll e){

    if(e==0){
        return 1;
    }
    else if(e%2==0){
        x= elevar(b,e/2);
        return mul(x,x)%MOD;
    }
    else{
        x=elevar(b,(e-1)/2);
        x=mul(x,x)%MOD;
        return mul(x,b)%MOD;
    }
}   

int main(){
    REGALO
    ll n,a,b;
    cin>>n;
    ll fact[1000006];
    fact[0]=1;

    fore(i,1,1000006){
        fact[i]=fact[i-1]*i%MOD;
    }
    
    fore(i,0,n){
        cin>>a>>b;
        cout<< mul(fact[a],(elevar(mul(fact[b],fact[a-b])%MOD,MOD-2)))%MOD<<"\n";
    }
}