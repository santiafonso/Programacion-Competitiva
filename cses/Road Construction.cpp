#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define fore(a,b,c) for(int a=b; a<c; ++a)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define SZ(a) ((int)a.size())
#define fst first
#define snd second
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAXN 200005
#define ALPH 26
#define M 1000000007
#define MAXINT (1<<30)
#define MAXll (1ll<<60)
#define PI 3.141592653
#define ALL(s) s.begin(),s.end()
#define INF (1LL<<62)
using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
 
struct DSU {
	vector<int> e;
	void init(int n) { e = vector<int>(n, -1); }
	int get(int x) { return (e[x] < 0 ? x : e[x] = get(e[x])); }
	bool sameSet(int x, int y) { return get(x) == get(y); }
	int size(int x) { return -e[get(x)]; }
	bool unite(int x, int y) {
		x = get(x), y = get(y);
		if (x == y) return 0;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return 1;
	}
};

int main(){
    FIN;
    int n,m;cin>>n>>m;
    
    DSU g;
    g.init(n);
    int res=1;
    int c=n;
    
    fore(i,0,m){
        int x,y;
        cin>>x>>y,x--,y--;
        if(g.unite(x,y)){
            res=max(res,g.size(x));
            c--;
        }
        cout<<c<<" "<<res<<'\n';
    }

}