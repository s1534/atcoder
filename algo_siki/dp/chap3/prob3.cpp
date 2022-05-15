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
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1), b(n - 1);
    rep(i, n - 1) cin >> a.at(i);
    rep(i, n - 1) cin >> b.at(i);

    int dp[101][10000];
    rep(i, 101) {
        rep(j, 10000) { dp[i][j] = -1; }
    }
    dp[0][0] = 0;

    // rep(i, n - 1) {
    //     rep(j, m) {
    //         dp[i + 1][j] = dp[i][j];
    //         dp[i + 1][j + a.at(i)] = dp[i][j] + b.at(i);
    //     }
    // }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m; ++j) {
            // マス (i, j) にコマが行く可能性がない場合はスキップ
            if (dp[i][j] < 0) continue;

            // 真下マスへコマを渡す (スコアは変化なし)
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            // 右下マスへコマを渡す (スコア B[i] を加算)
            if (j + a.at(i) < m) {
                dp[i + 1][j + a.at(i)] =
                    max(dp[i + 1][j + a.at(i)], dp[i][j] + b.at(i));
            }
        }
    }

    cout << dp[n - 1][m - 1] << endl;
    rep(i, n) {
        rep(j, m) { cout << dp[i][j] << ' '; }
        cout << endl;
    }
}
