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

void primeFactors(ll n, set<ll>& a) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        a.insert(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (i.e., we can increment i by 2)
    for (ll i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            a.insert(i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
        a.insert(n);
}

int main () {

    ll n,aux2;cin>>n;
    set<ll> a;
    primeFactors(n,a);
    
    

    cout<<a.size()<<"\n";

    aux2=a.size();
    fore(i,0,aux2){
        ll aux=*a.begin();
        cout<<1<<" "<<n/aux<<"\n";
        a.erase(aux);
    }
}