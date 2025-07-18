#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
#define SZ(x) ((ll) (x.size()))
using namespace std;
typedef long long ll;

int main(){
    REGALO
    ll t,a,b,resaux,resfinal;
    pair<ll,ll> res;
    char aux;
        cin>>t;
        fore(i,0,t){
            cin>>a>>b;
            res.first=0;
            fore(j,0,a){

                fore(h,0,b){
                    cin>>aux;
                        if(aux=='#'){
                            resfinal=h;
                            resaux++;
                            }
                    }

                if(res.first<resaux){
                    res.first=max(res.first,resaux);
                    res.second=j;
                }
                
                resaux=0;
                
                
            }
            
        cout<<res.second+1<<" "<<resfinal+1<<"\n";
        resfinal=0;
        }



}