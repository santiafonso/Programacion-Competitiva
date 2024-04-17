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

    ll n;
    cin>>n;
    string x,y;
    map<pair<string,string>,ll> aux; 
    ll res=0;
    fore(i,0,n){

        cin>>x>>y;
        if(aux.count({x,y})){
            aux[{x,y}]++;
        }
        else{
        aux[{x,y}]++;
        }   


    }
    for(auto x:aux ){

    res=x.second+res;
                   
        }
    cout<<aux.size();


}
