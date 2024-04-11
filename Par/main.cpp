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

    pair<int,int> p={1,2},q={3,1},r={3,0};
    p.first;//primer elemento del par
    vector<pair<int,int>> v;
    v.push_back(p);
    v.push_back(q);
    v.push_back(r);
    sort(v.begin(),v.end()); //ordena las tuplas


    //otro ejemplo
    int n; cin >> n;
    vector <pair<int,int>> v;
    fore(i,0,n){

        int x; cin >> x;
        v.push_back({x,i});         //guarda en un arreglo el elemento del arreglo y su posicion para guardas la posicio original del arreglo a la hora de ordenarlo

    }

    sort(v.begin(),v.end());

    return 0;
}