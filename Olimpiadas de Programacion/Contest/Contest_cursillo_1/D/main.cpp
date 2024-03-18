#include <bits/stdc++.h> 
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); //mas rapido las lecturas y escrituras SIEMPRE USAR "\n" ej: cout<<"\n"

using namespace std;
typedef long long ll;

int main(){

    int n,q;;cin >> n>>q;
    char a[n],x;
    int b[n+1];
    fore(i,0,n){
        cin>> x;
        a[i]=x;

    }
    b[0]=0;
    fore(i,0,n){

    b[i+1]=int(a[i]-'a')+1+int(b[i]);

    }  


fore(i,0,q){

    int l,r; cin >> l>>r;

    cout << b[r]-b[l-1]<<"\n";
}
}