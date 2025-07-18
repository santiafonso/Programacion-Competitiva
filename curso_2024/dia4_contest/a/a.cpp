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
    ll t,x;
    cin>>t;

    fore(i,0,t){
        cin>>x;
        if(x<=1399){
            cout<<"Division 4"<<"\n";
        }
        else if(1400<=x && x<=1599){
            cout<<"Division 3"<<"\n";
        }
        else if(1600<=x && x<=1899){
            cout<<"Division 2"<<"\n";
        }
        else if(x>=1900){
            cout<<"Division 1"<<"\n";
        }
    }
}