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
    cin>>t;
    
    fore(i,0,t){
        ll Y=1;
        ll X=1;
        string x,y;
        cin>> x;
        cin>>y; 
         for (char& a: x)
        {   if(a=='X'){
            X++;
            }
            
            if(a=='S'){
                X=X*-1;
            }    
            
            if(a=='M'){
                X=0;
            }  
        }

         for (char& a: y)
        {   if(a=='X'){
            Y++;
            }
            
            if(a=='S'){
                Y=Y*-1;
            }    
            
            if(a=='M'){
                Y=0;
            }  
        }

        if(X<Y){
            cout<<"<"<<"\n";
        }
        if(X>Y){
            cout<<">"<<"\n";
        }
        if(X==Y){
            cout<<"="<<"\n";
        }

    }

}