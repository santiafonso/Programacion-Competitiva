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

    ll n,x,aux;
    cin>>n;
    cin>>x;
    vector<pair<ll,ll>> v;pair<ll,ll> r;
    fore(i,0,n){
        cin>>aux;
        v.push_back({aux,i});
    }
    
    sort(v.begin(),v.end());

    
    ll i=0;ll j=v.size()-1  ;int flag=1;
    
    while(i<j){

        if(v[i].first+v[j].first<x){
        i++;    
        }

        else if(v[i].first+v[j].first>x){j--;}
         
        
        else if(v[i].first+v[j].first==x){
            r={v[i].second,v[j].second} ;
            flag=0;
            i++;
            j--;
        }

/*            if(v[i].first+v[j].first<x){
        i++;    
        }
        else if(v[i].first+v[j].first>x){j--;}
        else 
        }*/

    }
        if(flag==1){cout<<"IMPOSSIBLE";}
        else{cout<<r.first+1<<" "<<r.second+1;}
}