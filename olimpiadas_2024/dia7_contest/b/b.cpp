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

    ll n,a,aux,aux1,res=0;
    cin>>n;
    vector<pair<ll,ll>> v;
    fore(i,0,n){
        cin>>aux>>aux1;
        v.push_back({aux,aux1});
        }

        fore(i,0,n){
            a=i;
            fore(j,a,n){
                if(v[i].first==v[j+1].second){
                    res++;
              
                }
                if(v[i].second==v[j].first){
                    res++;
                  
                }

            }
        }
    cout<<res;

    }

