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

    int n,a=0;
    cin>>n;
    int x,y,z;
    fore(i,0,n){

        cin>>x>>y>>z;
        if((x==1 && y==1)){
            a++;
        }

        else if((y==1 && z==1)){
            a++;
        }

        else if((x==1 && z==1)){
            a++;
        
    }
   
} cout<<a;
}