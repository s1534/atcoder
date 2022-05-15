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
    vector<int> a(4);
    rep(i, 4) cin >> a.at(i);
    int dp[4][4];

    rep(i, 4) { rep(j, 4) dp[i][j] = 0; }
    rep(i, 4) dp[0][i] = a.at(i);
    rep(i, 4 - 1) {
        rep(j, 4) {
            if (j == 0) {
                dp[i + 1][j] = dp[i][j] + dp[i][j + 1];
            } else if (j == 3) {
                dp[i + 1][j] = dp[i][j] + dp[i][j - 1];
            } else {
                dp[i + 1][j] = dp[i][j] + dp[i][j - 1] + dp[i][j + 1];
            }
        }
    }

    // rep(i, 4) {
    //     rep(j, 4) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }

    cout << dp[3][3];
}
