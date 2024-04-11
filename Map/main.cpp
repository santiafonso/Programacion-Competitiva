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
    map<pair<ll,ll>,int> mp;
    mp [{2,4}]=7;               //la tupla {2,4} esta asociada al numero 7s
    mp [{2,4}]=5;
    //mp.erase ({2,4});
    
    int n; n=mp.count({2,4});

    for(auto i:mp){

    }
    cout << n<<"\n";
}