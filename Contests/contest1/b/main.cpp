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
    ll t;
    cin >> t;
    char a[9];
    for (int i = 0; i < t; i++)
    {   
        
   
        ll indice=0;
        
        for (int i = 0; i < 9; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < 9; i++)
        {
            if(a[i]=='?'){
                indice=i;
            }
        }


        if(3<=indice<6){
            if((a[indice-3]=='A'||a[indice-3]=='B') &&(a[indice+3]=='B'||a[indice+3]=='A')){
                cout << 'C' << endl;
            }

            if((a[indice-3]=='C'||a[indice-3]=='A') &&(a[indice+3]=='A'||a[indice+3]=='C')){
                cout << 'B' << endl;
            }
                
            if((a[indice-3]=='B'||a[indice-3]=='C') &&(a[indice+3]=='C'||a[indice+3]=='B')){
                cout << 'A' << endl;
            }
        }

        if(indice<3){
            if((a[indice+3]=='A'||a[indice+3]=='B') &&(a[indice+6]=='B'||a[indice+6]=='A')){
                cout << 'C' << endl;
            }

            if((a[indice+3]=='C'||a[indice+3]=='A') &&(a[indice+6]=='A'||a[indice+6]=='C')){
                cout << 'B' << endl;
            }
                
            if((a[indice+3]=='B'||a[indice+3]=='C') &&(a[indice+6]=='C'||a[indice+6]=='B')){
                cout << 'A' << endl;
            }
        }

                if(6<=indice){
            if((a[indice-3]=='A'||a[indice-3]=='B') &&(a[indice-6]=='B'||a[indice-6]=='A')){
                cout << 'C' << endl;
            }

            if((a[indice-3]=='C'||a[indice-3]=='A') &&(a[indice-6]=='A'||a[indice-6]=='C')){
                cout << 'B' << endl;
            }
                
            if((a[indice-3]=='B'||a[indice-3]=='C') &&(a[indice-6]=='C'||a[indice-6]=='B')){
                cout << 'A' << endl;
            }
        }
    

  }
}