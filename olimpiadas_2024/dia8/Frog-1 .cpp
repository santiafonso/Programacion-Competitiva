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

ll n,aux;
cin>>n;
vector<ll> v;
vector<ll> c(n,0);

fore(i,0,n){
   cin>>aux;
   v.push_back(aux); 
}


c[n-1]=0;

ll res=LLONG_MAX;
fore(i,0,n){

    fore(j,i+1,min(100,)){
        res=min(c[j]+abs(v[n-i]-c[j]),res);
    }

}

}