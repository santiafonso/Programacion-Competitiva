#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> divisors(ll n){
    vector<ll> d;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            d.push_back(i);
            if(i*i!=n) d.push_back(n/i);
        }
    }
    return d;
}

// --- Tu version (con a+b-2 y 2*(a+b)) ---
set<ll> my_version(ll a, ll b){
    if(a>b) swap(a,b);
    set<ll> res;
    auto check = [&](ll d){
        if(d>a) return;
        if(a % d == 0 && (b-2)%d == 0) res.insert(d);
        else if((a-1)%d==0){
            if((b-1)%d==0) res.insert(d);
            else if(b%d==0 && (b-2)%d==0) res.insert(d);
        }
        else if((a-2)%d==0){
            if(b%d==0) res.insert(d);
        }
    };
    for(ll d:divisors(a+b-2)) check(d);
    for(ll d:divisors(2*(a+b))) check(d);
    return res;
}

// --- Version editorial (5 gcds) ---
set<ll> editorial_version(ll w, ll l){
    vector<ll> g;
    g.push_back(gcd(w-1, l-1));
    g.push_back(gcd(w, l-2));
    g.push_back(gcd(w-2, l));
    g.push_back(gcd(w-1, l-2));
    g.push_back(gcd(w-2, l-1));
    set<ll> res;
    for(ll x:g){
        if(x<=0) continue;
        for(ll d:divisors(x)) res.insert(d);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 500; // rango de pruebas
    for(int w=3; w<=N; w++){
        for(int l=3; l<=N; l++){
            auto A = my_version(w,l);
            auto B = editorial_version(w,l);
            if(A!=B){
                cout<<"DIFERENCIA en ("<<w<<","<<l<<")\n";
                cout<<"my_version: ";
                for(ll x:A) cout<<x<<" ";
                cout<<"\neditorial: ";
                for(ll x:B) cout<<x<<" ";
                cout<<"\n";
                return 0;
            }
        }
    }
    cout<<"Todo coincide hasta "<<N<<"\n";
}
