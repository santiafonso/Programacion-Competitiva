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
const ll MOD=1000000007; // o 1e9+7
#define oper sum
#define NEUT 0

int main(){

ll n,aux,res=0;
cin>>n;
ll a[n];

fore(i,0,n){
    cin>>aux;
    a[i]=aux;
}

fore(i,0,n-1){
    if(a[i]>a[i+1]){
        res=a[i]-a[i+1]+res;
        a[i+1]=a[i];
    }
}
cout<<res;
}