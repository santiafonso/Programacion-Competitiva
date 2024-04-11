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

    ll n;
    cin >> n ;
    //Ingreso de elemntos del arreglo
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //arreglo  de sumas parciales
    ll sumas[n+1];
    ll x=0;
    sumas[0]=0;
    
    for (int i = 0; i < n; i++)
    {
        x=a[i]+x;
        sumas[i+1] = x;
    }

    //calculando rta
    x=0;
    ll res=0;
    for (int i = 0; i < n+1; i++)
    {
        x=min(x, sumas[i]);

        res=max( res, sumas[i] - x );

    }
    
    //IMPRIMIR LO QUE HAY EN EL ARREGLO
    for (int i = 0; i < n; i++)
    {
        cout << "elementos del arreglo:" << a[i] <<endl;
    }
    
    for (int i = 0; i < n+1; i++)
    {
        cout << "elementos del arreglo de sumas parciales:"<< sumas[i] <<endl;
    }

    cout << "la respuesta es:" << res << endl; 
}

