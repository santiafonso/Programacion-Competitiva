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

    ll t;cin >> t;

        fore(i,0,t){

            ll n,k; cin>>n>>k;
            ll a[n];
            ll b[n];
            pair <ll,ll> par[n];

            fore(i,0,n){
                ll b;cin>>b;
                a[i]=b;


            }

            fore(i,0,n){
                ll c;cin >> c;
                b[i]=c;
            
            }
            
            fore(i,0,n){
                par[i]={a[i],b[i]};
            }

            sort(par,par+n);

            fore(i,0,n){

                if(k>=par[i].first){
                    k=k+par[i].second;
                }

            }
            cout<<k<<"\n";
        }

}