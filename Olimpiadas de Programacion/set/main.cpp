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

    set<ll> st;             //conjunto
    st.insert(5);           //insertamos un elemento en el conjunto, si hay varios no importa
   // st.erase(5);
    
    if(st.count(5)){cout << "Hay un cinco \n";}//preg si hay un 5 en el conjunto

    //todas las preguntas de arriva son de orden O(log n)   


    for(ll i:st){           //recorro todo el conjunto O(n)
    cout << i;
    }
}