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
        REGALO
        ll n;
        cin>>n;
        map<ll,ll> aux;
        ll x;
 

        fore(i,0,n){
            cin>>x;
  
        if(aux.count(x)){
        aux[x]=aux[x]+1;   
        }
        else{
        aux[x]=1;
        }      
        }


        ll res=0;

        for(auto x:aux ){

            if(x.second>res){
                res=x.second;
            }
           
        }
        
        cout<<res<<"\n";

        
}