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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a.at(i);

    ll dp[100000];
    rep(i,100000) dp[i] = 10000000;
    dp[0] = 0;
    rep2(i, 1, n) {
        rep2(j, 1, m + 1) {
            if (i - j >= 0) dp[i] = min(dp[i], dp[i - j] + a.at(i) * j);
        }
    }
    cout << dp[n - 1];
}
