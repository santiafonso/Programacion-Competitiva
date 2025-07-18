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


bool can (vector<ll> v,ll m,ll n){
    bool res=1;
    ll acc=0;
    fore(i,0,v.size()){
        /*!IMPORTANTE VEO SI LA RONDA QUE ESTOY VIENDO ES MAS CHICA QUE TODAS LAS DE LOS JUEGADORES, 
        Y DESPUES ME FIJO SI TODAS LA SUMA DE TODAS LAS RONDAS LIBRES DE LOS DEMAS JUGADORES ES MAS GRANDE 
        QUE LA RONDA QUE ESTOY VIENDO
        */
        if(m<v[i]){
            return(res=0);  
            break;
           // cout<<"c"<<"\n";
        }
        else{
            acc=acc+(m-v[i]);
          //  cout<<"b"<<"\n";
        }

    }
    //cout<<"acc es:"<<acc<<"\n";
    if(acc<m){
        res=0;
       // cout<<"a"<<"\n";
    }
    return(res);    
}

int main(){
    REGALO
    ll n,aux;
    ll ronda=1e10;
    cin>>n;
    vector <ll> v;

    fore(i,0,n){
        cin>>aux;
        v.push_back(aux);
    }


    ll l=0;ll r=ronda;ll m;ll res=0;

        while(l<=r){

            m=(l+r)/2;
            //cout<<"l es:"<<l<<"\n"<<"r es:"<<r<<"\n"<<"m es:"<<m<<"\n"<<"can es:"<<can(v,m,n)<<"\n"<<"\n";

            if(can(v,m,n-1)){
                r=m-1;
            
            }

            else {    
                l=m+1;  
            }

        }

        l+=2;
        while(can(v,l,n)){
            l--;
        }
        l++;
        cout<<l;
    
        
}
  
