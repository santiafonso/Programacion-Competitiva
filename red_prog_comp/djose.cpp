#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
    FIN;
    int nn;
    cin >> nn;
    fore(i,0,nn){
        double p,r,y,n,s,e,w;
        cin >> p >> r >> y;

        // primero que todo: arrancamos de 0
        n = e = s = w = 0;
        
        // aplicamos pitch
        e += p/2.0;
        w -= p/2.0;
        
        // aplicamos roll
        n += r/2.0;
        s -= r/2.0;
        
        // al final distribuimos yaw parejo
        n += y/4.0;
        e += y/4.0;
        s += y/4.0;
        w += y/4.0;
        
        cout << fixed << setprecision(8) << n << " " << e << " " << s << " " << w << "\n";
        

       
    }
    return 0;
}
