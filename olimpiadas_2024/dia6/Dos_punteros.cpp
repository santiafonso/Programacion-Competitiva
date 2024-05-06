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

    ll n,x,aux;
    cin>>n;
    cin>>x;
    vector<ll> v;
    fore(i,0,n){
        cin>>aux;
        v.push_back(aux);
        cout<<aux;
    }

    fore(i,0,n){
        aux=0;
        
        fore(j,i,n){
            aux=v[j]+aux;
            if(aux>x){
                break;
            }
            else if(aux==x){
                cout<<i<<j;
            }
            cout<<i<<j;
        }
    }

}