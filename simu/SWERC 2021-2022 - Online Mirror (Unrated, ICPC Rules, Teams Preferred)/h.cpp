#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(s) ll(s.size())
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

vector<ll> divisors(ll n) {
    vector<ll>divisors;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                divisors.push_back(i) ;
            }
            else {
                divisors.push_back(i) ;
                divisors.push_back(n/i) ;
            }
        }
    }
    return divisors;
}


int main(){
    FIN;
    ll t = 1;
    cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        if(a>b)swap(a,b);
        ll c = a+b-2;
        vector<ll> dc = divisors(c);
        sort(ALL(dc));
        // DGB(c);
        set<ll> res;
        for(auto d : dc){
            if(d>a)break;
            if(a % d == 0 && (b-2)%d == 0){
                res.insert(d);
            } 
            else if((a-1)%d==0){
                if((b-1)%d==0)res.insert(d);
                else if(b%d==0 && (b-2)%d==0)res.insert(d);
            } 
            else if((a-2)%d==0){
                if(b%d==0)res.insert(d);
            }
        }
        c = (a+b);
        dc = divisors(c);
        sort(ALL(dc));
        // DGB(c);
        for(auto d : dc){
            if(d>a)break;
            if(a % d == 0 && (b-2)%d == 0){
                res.insert(d);
            } 
            else if((a-1)%d==0){
                if((b-1)%d==0)res.insert(d);
                else if(b%d==0 && (b-2)%d==0)res.insert(d);
            } 
            else if((a-2)%d==0){
                if(b%d==0)res.insert(d);
            }
        }
        c = a+b-1;
        dc = divisors(c);
        sort(ALL(dc));
        // DGB(c);
        for(auto d : dc){
            if(d>a)break;
            if(a % d == 0 && (b-2)%d == 0){
                res.insert(d);
            } 
            else if((a-1)%d==0){
                if((b-1)%d==0)res.insert(d);
                else if(b%d==0 && (b-2)%d==0)res.insert(d);
            } 
            else if((a-2)%d==0){
                if(b%d==0)res.insert(d);
            }
        }
        cout << SZ(res) << " ";
        showAll(res);
    }
}