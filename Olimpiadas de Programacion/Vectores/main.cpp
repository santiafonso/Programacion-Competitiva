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
    int x; cin>>x;
    vector<int> v;      //creo un vector
    v.push_back(x);     //mando un elemento al final
    v.pop_back();
    cout<<(int)v.size()<<"\n";

    sort(v.begin(),v.end());    //complejidad 0(n*log n)
    reverse(v.begin(),v.end()); //0(n)

    for(auto i:v){
        cout << i << ""; //imprime los elementos del arreglo
    }
}   