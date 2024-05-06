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

    ll t;
    cin>>t;
    ll n,aux,aux1=0;
    vector<ll> v,sinrepes;
    
    fore(i,0,t){
        sinrepes.clear();
        v.clear();
        cin>>n;
        
        fore(i,0,n){
            cin>>aux;
            v.push_back(aux);

        }

        sort(v.begin(),v.end());
        
        sinrepes.push_back(v[0]);

        fore(i,0,v.size()-1){
        
            if(v[i]!=v[i+1]){
                sinrepes.push_back(v[i+1]);
            }

        }

        ll r=0,l=0,res=1;

        while(r!=sinrepes.size() && l!=sinrepes.size()){
                //cout<<"R="<<r<<endl<<"L="<<l<<endl<<"la resta es"<<sinrepes[r]-sinrepes[l]<<endl<<"n-1="<<n-1<<endl;
                if(sinrepes[r]-sinrepes[l]<=(n-1)){
                    res=max(res,r-l+1);
                    r++;
                }
                else{l++;}
                
            }   
    cout<<res<<"\n";
    }


}


