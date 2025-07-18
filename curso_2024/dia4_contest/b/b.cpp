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

    ll t,a,b,c,res;
    cin>>t;

    fore(i,0,t){
        res=0;
        cin>>a>>b>>c;
            res=max(a,max(b,c));
            if(res!=a){
                cout<<res-a+1<<" ";
            }
            else if(a==b || a==c){
                cout<<1<<" ";
            }else{cout<<0<<" ";}

            if(res!=b){
                cout<<res-b+1<<" ";
            }
            else if(a==b || b==c){
                cout<<1<<" ";
            }else{cout<<0<<" ";}        
            if(res!=c){
                cout<<res-c+1<<" ";
            }
            else if(a==c || b==c){
                cout<<1<<"\n";
            }else{cout<<0<<"\n";}
            

        }

        

        }

    

