#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);



using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7; // o 1e9+7



int main () {

ll pow2[27];
pow2[0] = 1;
fore(i, 1, 200000+100) {
    pow2[i] = (pow2[i-1] * 2) % MOD;
}


    ll aux,b,n;cin>>n>>b;
    ll v[200000+100];
        fore(i,0,n){
            cin>>aux;
            v[i]=aux;
        }

    ll sump[200000+100][3];
        
        sump[0][0]=0;
        sump[0][1]=0;        
    
        fore(i,0,n){
            if(v[i]!=1){
                sump[i+1][2] = sump[i][2];
                if(v[i]%2==1){
                    sump[i+1][0]=sump[i][0]+v[i];
                    sump[i+1][1]=sump[i][1];
                }
                else{
                    bool chek = true;
                    fore(j,0,27){
                        if(v[i]==pow2[j]){
                            sump[i+1][1]=sump[i][1]+v[i];
                            //cout<<v[i];
                            chek=false;
                            break;
                        }
                    }

                    if(chek){
                        sump[i+1][1]=sump[i][1];
                        sump[i+1][0]=sump[i][0];
                    }
                    
                }
            } else {
                sump[i+1][2] = sump[i][2] + 1; 
                sump[i+1][1]=sump[i][1];
                sump[i+1][0]=sump[i][0];
            }
            
        } 
        
        fore(i, 0, n) {
            cout <<"\n"<< sump[i+1][0] << " " << sump[i+1][1] << " " << sump[i+1][2] << "\n";
        }



        fore(i,0,b){

        ll x,y;
        cin>>x>>y; 
        x--;
        y--;
        
        if(sump[y][0]-sump[x-1][0]+((sump[y][2]-sump[x-1][2]+1)/2) < sump[y][1]-sump[x-1][1]+((sump[y][2]-sump[x-1][2])/2) ){
            //
            cout<<"A"<<"\n";
        }else if(sump[y][0]-sump[x-1][0]+((sump[y][2]-sump[x-1][2]+1)/2) == sump[y][1]-sump[x-1][1]+((sump[y][2]-sump[x-1][2])/2)){
            cout<<"E"<<"\n";

        }
        else if(sump[y][0]-sump[x-1][0]+((sump[y][2]-sump[x-1][2]+1)/2) >sump[y][1]-sump[x-1][1]+((sump[y][2]-sump[x-1][2])/2)){
            cout<<"B"<<"\n";
        }
        
        }
}