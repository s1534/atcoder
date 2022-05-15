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
    dp[0][n - 1] = a[0][n - 1];

    for (int i = n - 2; i >= 0; i--) {
        dp[0][i] = dp[0][i + 1] + a[0][i];
    }
    rep2(i, 1, n) { dp[i][n - 1] = dp[i - 1][n - 1] + a[i][n - 1]; }

    for (int i = 0; i < n; i++) {
        for (int j = n; j >= 0; j--) {
            if (i == 0 || j == n - 1) continue;
            dp[i][j] = min(dp[i - 1][j] + a[i][j], dp[i][j + 1] + a[i][j]);
        }
    }

    cout << dp[n - 1][0] << endl;

    // rep(i, n) {
    //     rep(j, n) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }
}
