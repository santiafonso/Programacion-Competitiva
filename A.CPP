#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(a,b,c) for(int a=b;a<c;++a)
#define SZ(a) ((int)a.size())
#define fst frist
#define snd second
#define ALL(a) a.begin(),a.end()
using namespace std;
typedef long long ll;

int main(){
    FIN;
    int n;
    cin>>n;
    int v[n][2];
    vector<int> ind(n,0);
    fore(i,0,n)fore(j,0,2){cin>>v[i][j];--v[i][j];ind[v[i][j]]++;}
    fore(i,0,n){
        if(ind[i]==0){
            cout<<"N";
            continue;
        }
        if(ind[v[i][0]] == 1 || ind[v[i][1]] == 1){
            cout<<"N";
            continue;
        }
        cout<<"Y";
    }
    cout<<'\n';
    return 0;
}