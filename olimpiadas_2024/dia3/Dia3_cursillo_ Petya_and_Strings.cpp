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
    char x;
    string a,b ;
    
        cin>>a>>b;
    
    for (char& x:a)
    {
        x=tolower(x);
    }
    for (char& x:b)
    {
        x=tolower(x);
    }
    if(a<b){
        cout<<-1;
    }

    if(a>b){
        cout<<1;
    }

    if(a==b){
        cout<<0;
    }
    }