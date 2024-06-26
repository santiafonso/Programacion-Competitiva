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
ll res = 0;

ll size1(vector<vector<ll>> b, ll a){

    fore(i,0,b[a].size()){
        res=1+size1(b,b[a][i]);
    }

return res;
}

int main(){

ll n,aux;
cin>>n;
vector<vector<ll>> v(n);
fore(i,1,n  ){

    cin>>aux;
    aux--;
    v[aux].push_back(i);

}

// fore(i,0,n){
//     fore(j,0,v[i].size()){
//         cout<<v[i][j];
//     }
//     cout<<'\n';
// }
fore(i,0,n){
res=size1(v,i);
cout<<res;
res=0;  
cout<<'\n';
}
    
}