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
    int a[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];

    int dp[n][n];
    rep(i, n) {
        rep(j, n) { dp[i][j] = 0; }
    }
    dp[0][0] = a[0][0];

    rep2(i, 1, n) {
        dp[0][i] = dp[0][i - 1] + a[0][i];
        dp[i][0] = dp[i - 1][0] + a[i][0];
    }

    rep2(i, 1, n) {
        rep2(j, 1, n) {
            dp[i][j] = max(dp[i - 1][j] + a[i][j], dp[i][j-1] + a[i][j]);
        }
    }
    cout << dp[n - 1][n - 1] << endl;

    // rep(i, n) {
    //     rep(j, n) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }
}
