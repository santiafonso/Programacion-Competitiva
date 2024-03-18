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

    int t,aux,rta;cin >> t;

    fore(i,0,t){

        int h,m; cin >> h >> m;

        aux=h*60;

        rta=(24*60)-(aux+m);

        cout << rta<<"\n";

    }

}
