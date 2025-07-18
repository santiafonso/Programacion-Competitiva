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
    ll n,m,t,aux,mauu;
    string res;
    cin>>t;
    
    fore(i,0,t){
        
        cin>>n>>mauu;
        vector<ll> a;
        fore(i,0,n){
            cin>>aux;
            a.push_back(aux);
        }
        cin>>m;
        if(m-a[0]<a[0]){
            a[0]=m-a[0];
        }

        if(m-a[n]>=a[n]){
            a[n]=m-a[n];
        }

        fore(i,1,n){
            if(min(a[i],m-a[i])>=a[i-1]){
                a[i]=min(m-a[i],a[i]);
            }        
        }
        if(is_sorted(a.begin(),a.end())){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

        }
}
//ESTA MAL