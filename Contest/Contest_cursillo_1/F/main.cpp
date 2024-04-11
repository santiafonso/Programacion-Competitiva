#include <bits/stdc++.h> 
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); //mas rapido las lecturas y escrituras SIEMPRE USAR "\n" ej: cout<<"\n"

using namespace std;
typedef long long ll;

int main(){

    ll n,m,x,z=0;cin >> n >> m;

    ll a[n];
    
    fore(i,0,n){
        
        a[i]=0;
        
    }

    fore(i,0,m){

        cin>>x;
        
        
        if(a[x-1]==0){
            z++;
            }

        a[x-1]++;

        if(z==n){
            cout<<1;
            
            fore(i,0,n){
            a[i]--;
                if (a[i]==0){
                    z--;
                    }
            }


            }else{cout<<0;}
        }

    }
