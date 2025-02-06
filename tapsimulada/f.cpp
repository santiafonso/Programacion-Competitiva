#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);



using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7; // o 1e9+7


int main () {

    ll n;cin>>n;
    ll r,aux=0,res=0;
    fore(i,0,n){
        cin>>r;

        if(r==0){
            aux=0;
            res=res-1;
        }

        else if(aux<2 && r==1 ){
            res=res+1;
            aux=aux+1;
        }

        else if(aux>=2 && r==1){
            res=res+2;
            
        }
        
    }
    cout<<res;
}