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
string res="NO";
ll n,a,b,c;
cin>>n;
fore(i,0,n){
    res="NO";
    cin>>a>>b>>c;

    if(a==(b+c)){
        res="YES";
    }
    else if(b==(a+c)){
        res="YES";
    }
    else if(c==(a+b)){
        res="YES";
    }
    cout<<res<<"\n";
}
}