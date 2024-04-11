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

    //la busqueda binaria sirve para buscar un elemento en un arreglo ordenado con complejidad O(log n)

int main(){
int n;
vector <int> v;
cin >> n;
int a[n];

fore(i,0,n){
    cin>>n;
    a[i]=n;
}
//IMPORTANTE: SI SE QUIERE EL INDICE SE TIENE QUE RESTAR LA POSICION INICIAL DEL ARREGLO EN ESTE CASO 'a'
lower_bound(a,a+n,5)-a; //se le ingresa los parametros de, el principio del arreglo, el final del arreglo, y que elemento se quiere buscar 

//Ejemplo para vectores
lower_bound(v.begin(),v.end(),5)-v.begin();

//SI el valor que me devuelve lower_bound esta fuera de mi rango "n" entionces no existe dentro del arreglo el valor que quiero buscar


//ejemplo de busqueda binaria con set
set<int> s;
s.lower_bound(34);


fore(i,0,n){cout<<a[i];}
}