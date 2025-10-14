    #include <bits/stdc++.h>
    #define fst first
    #define snd second
    #define pb push_back
    #define fore(i,a,b) for(int i=a;i<b;i++)
    #define SZ(x) ((int)x.size())
    #define all(x) x.begin(),x.end()
    #define FIN ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
    #define mset(a,v) memset((a),(v),sizeof(a))
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;

    int main(){
        FIN;
        ll t;cin>>t;
        while(t--){
            ll n,m;cin>>n>>m;

            ll maxr=0,maxw=0;
            fore(i,0,m){
                ll r,w;
                cin>>r>>w;
                maxr=max(maxr,r);
                maxw=max(maxw,w);
            }
            if(maxr+maxw > n){
                cout<<"IMPOSSIBLE\n";
            }
            else{
                string auxw="",auxr="",res="";
                fore(i,0,maxw){
                    auxw=auxw+'W';
                }
                fore(i,0,n-maxw){
                    auxr=auxr+'R';
                }
                res=auxr+auxw;
                cout<<res<< "\n";
            }

        }
    }
