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
ll n;
cin>>n;
cout<<n<<" ";
while(n!=1){
    if(n%2==0){
        n=n/2;
        cout<<n<<" ";
    }
    else{
        n=n*3+1;
        cout<<n<<" ";
    }
}   
}