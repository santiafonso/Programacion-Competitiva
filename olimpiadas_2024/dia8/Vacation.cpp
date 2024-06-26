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
  ll n,ai,bi,ci;
  cin>>n;
  vector<ll> a;
  vector<ll> b;
  vector<ll> c;
  ll dp[n][3];

  fore(i,0,n){

    cin>>ai>>bi>>ci;
    a.push_back(ai);
    b.push_back(bi);
    c.push_back(ci);

  }

  dp[0][0]=a[0];
  dp[0][1]=b[0];
  dp[0][2]=c[0];

  fore(i,1,n){

    dp[i][0]=a[i]+max(dp[i-1][2],dp[i-1][1]);
    dp[i][1]=b[i]+max(dp[i-1][0],dp[i-1][2]);
    dp[i][2]=c[i]+max(dp[i-1][1],dp[i-1][0]);
  }
  cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}
