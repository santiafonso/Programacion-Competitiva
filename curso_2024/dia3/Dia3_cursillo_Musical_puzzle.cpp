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
    REGALO
    int t,n;
    cin>>t;
    string s;

    fore(i,0,t){
        int res;
        cin>>n>>s;
        set<string> aux;
        string aux1="";

        fore(i,0,n-1){
           
                aux1=string(1,s[i])+string(1,s[i+1]);
                //aux1=s[i]+s[i+1];
                //cout<<aux1;
                aux.insert(aux1);    

        }
         
     cout<<aux.size()<<endl;
    
    }

}