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
    ll t,n;

    cin >> t;
    
    for (int i = 0; i < t; i++)
    {   ll x=0,sum=0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {   
            cin>>x;
            sum=sum+x;

        }


        ll y,res;
        x=1;
        while(x*x<sum){
            x++;
        }

        if(x*x==sum){
            cout<< "YES"<< endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

}

