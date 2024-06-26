#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
const ll MOD=1000000007; // o 1e9+7
#define oper sum
#define NEUT 0


int main(){
    FIN;
    ll t,j;
    cin>>t;
    string a;
    vector<pair<char,ll>> b;
    ll aux1;
    string aux;

    fore(i,0,t){
        cin>>a;
        
        j=0;
        aux1=1;
        b.clear();
        while(j<a.size()){

            if(a[j]==a[j+1]){
                aux1++; //repeticiones
                j++;
            }
            else{
                b.pb({a[j],aux1});
                aux1=1;
                j++;
            }
            
            if(j==a.size()-1){
                if(a[j+1]!=a[j]){
                    b.pb({a[j],1});
                }
                break;
            }
        }
        
        //cout<<a[a.size()] <<"\n";
        
        j=0;
        ll res=0;
        cout<<b.size()<<"\n";
        //cout<<b[0].first<<"/"<<b[1].first<<"/"<<b[2].first<<"\n";
        //cout<<b[0].fst<<" "<<b[0].snd<<"\n";
        while(j<=b.size()-3 && b.size()>=2 ){
            
            if(b[j].fst!=b[j+1].fst && b[j].fst==b[j+2].fst){
                if(b[j+1].first==1){
                    res=res+b[j+1].second;
                    j=j+2;
                 
                }
                else{
                      //cout<<"AA"<<"\n";
                    if(b[j].second<=b[j+2].second){
                        res=res+b[j].second;
                        j=j+1;
                    }
                    else{
                        res=res+b[j+2].second;
                        b.erase(b.begin()+j+2);
                        
                    }
                }
            }
            else{
                j++;
            }
        
        }
        cout<<res<<"\n";  
    }


    }