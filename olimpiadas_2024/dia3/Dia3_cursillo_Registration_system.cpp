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
    string a;
    ll n;
    ll x=0;
    cin >> n;
    map<string,int> aux;
    fore(i,0,n){
        
        cin>>a;
        
        if(aux.count(a)){
            aux[a]=aux[a]+1;
            cout<<a<<aux[a]<<endl;
        }
        else{
        aux.insert({a,0});
        cout<<"OK"<<endl;
        }
    }

}