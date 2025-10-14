#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 INF = (1LL<<62);

// -------- Li Chao Tree (mínimo) sobre x en [1, n] --------
struct Line {
    int64 m, b; // y = m*x + b
    Line(int64 _m=0, int64 _b=INF): m(_m), b(_b) {}
    inline int64 f(int64 x) const { return m*x + b; }
};

struct LiChao {
    struct Node {
        Line ln;
        int l=-1, r=-1;
    };
    vector<Node> T;
    int X1, X2; // dominio [X1, X2]
    LiChao(int L, int R): X1(L), X2(R) { T.reserve(2e6); T.push_back(Node()); } // root = 0

    void add_line(Line nw){ add_line(0, X1, X2, nw); }

    void add_line(int idx, int L, int R, Line nw){
        int mid = (L+R)>>1;
        Line lo = T[idx].ln, hi = nw;
        // en L queremos que lo(x) <= hi(x)
        if(lo.f(L) > hi.f(L)) swap(lo, hi);
        if(lo.f(R) <= hi.f(R)){
            T[idx].ln = lo; // lo es mejor en todo el intervalo
            return;
        }
        // en algún punto hi gana; comparamos en mid
        if(lo.f(mid) <= hi.f(mid)){
            T[idx].ln = lo;
            // hi gana en [mid+1, R]
            if(T[idx].r == -1){ T[idx].r = (int)T.size(); T.push_back(Node()); }
            add_line(T[idx].r, mid+1, R, hi);
        }else{
            T[idx].ln = hi;
            // lo gana en [L, mid]
            if(T[idx].l == -1){ T[idx].l = (int)T.size(); T.push_back(Node()); }
            add_line(T[idx].l, L, mid, lo);
        }
    }

    int64 query(int64 x){ return query(0, X1, X2, x); }

    int64 query(int idx, int L, int R, int64 x){
        if(idx == -1) return INF;
        int64 res = T[idx].ln.f(x);
        if(L == R) return res;
        int mid = (L+R)>>1;
        if(x <= mid) return min(res, query(T[idx].l, L, mid, x));
        else         return min(res, query(T[idx].r, mid+1, R, x));
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    if(!(cin >> n)) return 0;
    vector<int> h(n+1);
    for(int i=1;i<=n;i++) cin >> h[i];

    // ordenamos por (altura, índice)
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 1);
    stable_sort(ord.begin(), ord.end(), [&](int a, int b){
        if(h[a] != h[b]) return h[a] < h[b];
        return a < b; // importante para permitir empates de altura con j<i
    });

    vector<int64> dp(n+1, INF);
    LiChao cht(1, n);  // x = i en [1..n]

    // procesar en ese orden
    for(int idx : ord){
        // opción 1: empezar subsecuencia aquí (todo lo anterior se borra)
        int64 best = (int64)(idx-1) * (idx-1);

        // opción 2: enlazar con algún j anterior con h[j] <= h[idx]
        int64 val = cht.query(idx);
        if(val < INF/2){
            best = min(best, (int64)idx*idx + val);
        }
        dp[idx] = best;

        // añadimos la línea correspondiente a j = idx
        // y = m*x + b, con m = -2*(j+1), b = dp[j] + (j+1)^2
        int64 m = -2LL * (idx + 1);
        int64 b = dp[idx] + 1LL*(idx + 1)*(idx + 1);
        cht.add_line(Line(m, b));
    }

    // respuesta: mínimo al cerrar con el bloque final, o eliminar a todos
    int64 ans = 1LL*n*n; // borrar todos
    for(int i=1;i<=n;i++){
        ans = min(ans, dp[i] + 1LL*(n - i)*(n - i));
    }
    cout << ans << '\n';
    return 0;
}
