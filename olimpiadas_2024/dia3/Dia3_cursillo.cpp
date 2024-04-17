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
bool comp (ll a,ll b){              //sirve para el sort configuramos ocn lo quereemos ordenar
    return a<b;

}
int main(){

    int n;
    cin>>n;
    vector<long long> v;
    v.push_back(n);
     v.push_back(2);
      v.push_back(3);
    for (ll& x: v)
    {
        x++;
        cout<<x;            //aparte de añadir elementos al vertice los modificamos
    }



    sort(v.begin(),v.end(),comp);
    for (ll x: v)
    {
        cout<<x;            //mostramos el vertice de mayor a menor
    }


    
}
