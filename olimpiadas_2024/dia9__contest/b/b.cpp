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
    
    ll t,n,c,aux,aux1;
    cin>>t;

    fore(i,0,t){
        ll res=0;
        cin >> n >> c;
        ll a[101];



        fore(j,0,101){
            
            a[j]=0;
        }

        fore(j,0,n){
            cin>>aux;
            a[aux]++;
        }


        fore(j,0,101){ 
     
            if(a[j]>c && a[j]!=0){
                res=res+c;
            }
            else{
            res=res+a[j];
            }
        }
        cout<<res<<endl;
        }



    }
