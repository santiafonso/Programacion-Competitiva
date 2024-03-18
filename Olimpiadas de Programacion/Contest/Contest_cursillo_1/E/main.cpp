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
    int n,x,y;cin >> n;
    bool aux=false;
    int rta=1;
    pair<int,int> a[n];


    fore(i,0,n){
        cin >>x>>y;
        a[i]={x,y};
        

    }

    sort(a,a+n);
    
    fore(i,0,n-1){

       if(a[i].second>      a[i+1].second){

        aux=true;

       }
       
    }
    if(aux==true){
        cout<<"Happy Alex";
    }else{cout<<"Poor Alex";}
    }
