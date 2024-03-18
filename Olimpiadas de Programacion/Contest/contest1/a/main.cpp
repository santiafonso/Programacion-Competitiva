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
    ll t,a,b,c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
            cin >> a >> b >> c;
            if(a==b){
                cout << c<<endl;
            }

            if(a==c){
                cout << b<<endl;
            }

            if(c==b){
                cout << a<<endl;
            }
        }
        

    }
    

