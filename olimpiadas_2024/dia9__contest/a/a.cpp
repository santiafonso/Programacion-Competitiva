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
    ll t,n;
    char aux;
    cin>>t;
    vector<char> v;   
    ll a[27];
 
    fore(i,0,t){
        cin>>n;
        v.clear();
        ll res=0;

        fore(j,0,27){
            a[j]=0;

        }

        fore(j,0,n){
            cin>>aux;
            v.push_back(aux);
        }
    
        fore(j,0,n){
            if(a[v[j]-'A']==0){
                res=res+2;
                a[v[j]-'A']=1;
            }
            else{
                res=res+1;
            }

        }
       cout<<res<<"\n";
        
}
}