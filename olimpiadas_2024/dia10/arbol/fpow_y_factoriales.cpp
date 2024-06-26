#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
const ll MOD=998244353; // o 1e9+7

int add(int a, int b){
	a+=b;
	if(a>=MOD)a-=MOD;
	return a;
}

int sub(int a, int b){
	a-=b;
	if(a<0)a+=MOD;
	return a;
}

int mul(ll a, ll b){
	return a*b%MOD;
}

ll fpow(ll a, ll b){ // iterativa (mas rapida)
	ll res=1;
	while(b>0){
		if(b%2==1){
			res=(res*a)%MOD;
		}
		a=(a*a)%MOD,b/=2;
	}
	return res;
}

ll binpow(ll a, ll b){ // recursiva
	if(b==0)return 1;
	ll r=binpow(a,b/2);
	if(b%2==1)return r*r%MOD*a%MOD;
	return r*r%MOD;
}

const ll MAXN=1e6+5;
ll fc[MAXN],fci[MAXN];

void factoriales(){
	fc[0]=1;
	fore(i,1,MAXN)fc[i]=mul(fc[i-1],i);
	fci[MAXN-1]=fpow(fc[MAXN-1],MOD-2);
	for(ll i=MAXN-2;i>=0;i--)fci[i]=mul(fci[i+1],i+1);
}

ll comb(ll n, ll k){
	return mul(fc[n],mul(fci[k],fci[n-k]));
}

int main(){FIN;
	factoriales();
	
	return 0;
}
