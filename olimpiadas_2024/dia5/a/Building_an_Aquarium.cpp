#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 

using namespace std;
typedef long long ll;

bool can(vector<ll> v,ll m,ll x){
        ll aux=0;

        fore(i,0,v.size()){
        aux=max((m-v[i]),0LL)+aux;
        }

        return(aux<=x);
}

int main(){
    int t;
    ll n,x,aux,aux1;
    vector <ll> v;
    
    cin>>t;
    fore(j,0,t){
        
        ll h=1e10;
 
        cin>>n>>x;
        v.clear();

        fore(i,0,n){
        cin>>aux;
        v.push_back(aux);
        }
        
        ll l=0;ll r=h;ll m;ll res=0;

        while(l<=r){
            
            m=(l+r)/2;

            if(can(v,m,x)){
                l=m+1;
            }

            else {    
                r=m-1;
            }
        
        }
            
        l+=2;bool b=false;
        while(!can(v,l,x)){
            l--;
        }
       
        cout<<l<<endl;
        }
        /*l=x,r=y;
        while(l <= r) {
          m = (l+r)/2;
          if (can (m)) l=m+1;
          else r=m-1;
        }
        */
    }


    

