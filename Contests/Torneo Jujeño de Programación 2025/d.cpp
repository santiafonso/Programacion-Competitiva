#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fore(a,b,c) for(int a=b; a<c; ++a)
#define all(a) a.begin(),a.end()
#define SZ(a) ((int)a.size())
#define fst first
#define snd second
#define INF (1LL<<62)
using namespace std;
typedef long long ll;

int main() {
    FIN;
    int n;
    string s;
    cin >> n >> s;

    vector<int> ins, outs;
    fore(i, 0, n) {
        if (s[i] == 'I') ins.push_back(i);
        else outs.push_back(i);
    }

    vector<int> ans(n);
    fore(i, 0, SZ(ins)) ans[ins[i]] = outs[i] + 1;
    fore(i, 0, SZ(outs)) ans[outs[i]] = ins[i] + 1;

    cout << "SI\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
}
