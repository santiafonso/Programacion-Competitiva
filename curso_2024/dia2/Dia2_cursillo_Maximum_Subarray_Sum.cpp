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

    ll n,x;
    cin>>n;
    ll a[n];
    fore(i,0,n){
        cin>>x;
        a[i]=x;
    }

    ll sump[n+1];
    sump[0]=0;
    fore(i,0,n){
        sump[i+1]=sump[i]+a[i];
    
    }
    
    x=0;
    ll res=LLONG_MIN;
    fore(i,1,n+1){
       
       res=max(res,sump[i]-x);
       x=min(x,sump[i]);
    }
    cout<<res;
}