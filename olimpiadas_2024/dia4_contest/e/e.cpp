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


int main(){
    ll n,t,q;
    ll x;
    ll k,l,r;
    cin>>t;
    fore(i,0,t){
        cin>>n>>q;
        ll a[n];
        fore(i,0,n){        //leemos todos lso elementos del arrelgo
                cin>>x;
                a[i]=x;
            }
         //arreglo  de sumas parciales
        ll sumas[n+1];
        ll x=0;
         sumas[0]=0;
    
            for (int i = 0; i < n; i++)
         {
              x=a[i]+x;
              sumas[i+1] = x;
        }

        fore(i,0,q){
            
        cin>>l>>r>>k;       //cambiamos

       
        ll res=0;
        res=sumas[n]-(sumas[r]-sumas[l-1]);
        res=res+(k*(l-r+1));
        if(res%2==0){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
        


    }

}
}