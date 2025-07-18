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
ll n;
string a,b;
char aux;
cin>>n;
fore(i,0,n){
cin>>a>>b;
aux = ' ';

aux = a[0];
a[0]=b[0];
b[0]=aux;
//cout<<b[0]<<"\n"<<a[0]<<aux<<"\n";
cout<<a<<" "<<b<<"\n";
a = "";
b="";
}


}