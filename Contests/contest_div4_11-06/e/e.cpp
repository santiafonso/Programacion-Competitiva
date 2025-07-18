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
    ll t,n,h,a,c,ronda=0;
    vector<pair<ll,ll>> v;
    cin>>t;

        fore(i,0,t){
            cin>>h>>n;
            ronda=0;
            
            fore(j,0,n){
                cin>>a>>c;

                v.push_back({a,c+1}); 
                
 
            }

            while(h>0){
                fore(z,0,v.size()){
                    if(ronda%v[z].second==0){
                        h=h-v[z].first;
                    }

                }
                ronda++;
            cout<<0%200000<<"\n";
            cout<<h<<"\n";
            }

            cout<<ronda<<"\n";
            v.clear();
        }
}