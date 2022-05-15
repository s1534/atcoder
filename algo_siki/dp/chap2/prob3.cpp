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
    int n;
    cin >> n;
    int a[n][3];
    rep(i, n) rep(j, 3) cin >> a[i][j];
    int dp[n][3];
    rep(i, n) {
        rep(j, 3) { dp[i][j] = 0; }
    }
    rep(i, 3) { dp[0][i] = a[0][i]; }

    rep(i, n) {
        rep(j, 3) {
            rep(k, 3) {
                if (j != k) {
                    dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i + 1][k]);
                }
            }
        }
    }

    int ans = 0;
    rep(i, 3) { ans = max(ans, dp[n - 1][i]); }
    cout << ans;
}
