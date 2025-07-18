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

long long n,ma=LLONG_MIN,mi,x;
    cin >>n;
    vector<long long> v,s,sord;
    //arreglo normal
    fore(i,0,n)
    {
        cin >>x;
        v.push_back(x);
    }
    //arreglo sin ordenar
    s.push_back(0);
    fore(i,0,n)
    {
        s.push_back(s[i]+v[i]);
    }
    //arreglo ordenado

    sort(v.begin(),v.end());
    sord.push_back(0);
    fore(i,0,n)
    {
        sord.push_back(sord[i]+v[i]);
    }
    
    ll type,m,l,r;
    cin>>m;
    
    fore(i,0,m){
        cin>>type>>l>>r;

        if(type==1){
            cout<<s[r]-s[l-1]<<endl;
        }

        if(type==2){
            cout<<sord[r]-sord[l-1]<<endl;
        }
    }
}