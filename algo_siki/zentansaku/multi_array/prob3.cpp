#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m),c(k);
    rep(i, n) cin >> a.at(i);
    rep(i, m) cin >> b.at(i);
    rep(i, k) cin >> c.at(i);
    int ans = 0;
    rep(i, n) {
        rep(j, m) {
            rep(t,k){
                if(a.at(i) + b.at(j) == c.at(t)) ans++;
            }
        }
    }
    cout << ans;
}
