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
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    int dp[n][n];

    rep(i, n) { rep(j, n) dp[i][j] = 0; }
    rep(i, n) dp[0][i] = a.at(i);
    rep(i, n - 1) {
        rep(j, n) {
            if (j == 0) {
                dp[i + 1][j] = dp[i][j] + dp[i][j + 1];
            } else if (j == n - 1) {
                dp[i + 1][j] = dp[i][j] + dp[i][j - 1];
            } else {
                dp[i + 1][j] = dp[i][j] + dp[i][j - 1] + dp[i][j + 1];
            }
            dp[i + 1][j] %= 100;
        }
    }
    // rep(i, n) {
    //     rep(j, n) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }

    cout << dp[n-1][n-1];
}
