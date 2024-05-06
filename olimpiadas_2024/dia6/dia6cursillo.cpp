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

    /*Greedy
    problema de los dragones explicado por jere (tengo un fuerza y al matar c/dragon me suma fuerza)
    siempre intentar matar al mas facil
    */

   ll res=1,t;
   cin>>t;

   fore(i,0,t){
    ll n,aux ;
    cin >>n;
    vector<ll> v;
    fore(i,0,n){
        cin>>aux;
        v.push_back(aux);
    }
    
    sort(v.begin(),v.end());
    res=1;
    fore(i,0,n-1){
        if(1<v[i+1]-v[i]){
            res=0*res;
        }

        else{
            res=1*res;

        }
    }
    if(res==1){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
   }

}