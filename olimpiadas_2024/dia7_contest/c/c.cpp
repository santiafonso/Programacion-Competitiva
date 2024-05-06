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

    ll t,a,b,n,res=0;
    cin>>t;

    fore(i,0,t){
        cin>>a>>b>>n;
        res=0;
        
        while((a<=n) && (b<=n)){
        
        res++;
        
        if(a>b){
        b=a+b;
        }
        
        else {        
        a=b+a;
        }

        }
             cout<<res<<endl;
    }

}