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

    /*busqueda binarira
    
        1 3 7 10 12 13
        x=8
        if x>7
        agarramos el sub array 10 12 13
        ahora vemos la mitad
        es 10 
        x



        ////

        dame el primer elemento que sea menor a x   
        lower bound
        en un array a dado un elemento x te da el primer elemento que sea 


        partimos a la mitad y vamos a la derecha o izquierda hasta llegar a un punto que sea igual
        o hasta que el siguiente a un punto muerto con el ejemplo anterior vemos que con x=8 el numero mas cercano es 7-8
    
    */  int x=8;
        vector<int> v;
        lower_bound(v.begin(),v.end(),x);
        
        busqueda con punteros desde el maas chico al mas grande
        
        
    

}