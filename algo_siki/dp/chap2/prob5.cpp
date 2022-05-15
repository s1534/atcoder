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
    vector<string> a(n);
    char b[n][n];

    cin >> n;
    rep(i, n) cin >> a.at(i);

    int dp[n][n];

    rep(i, n) {
        rep(j, n) { dp[i][j] = 0; }
    }
    rep(i, n) {
        string tmp;
        tmp = a.at(0);

        if (tmp.at(i) == '#') break;
        dp[0][i] = 1;
    }
    rep(i, n) {
        string tmp;
        tmp = a.at(i);
        if (tmp.at(0) == '#') break;
        dp[i][0] = 1;
    }

    rep(i, n) {
        string tmp;
        tmp = a.at(i);
        rep(j, n) {
            if (tmp.at(j) == '#') {
                dp[i][j] = 0;
                continue;
            }
            if (i == 0 || j == 0) continue;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[n - 1][n - 1] << endl;

    // rep(i, n) {
    //     rep(j, n) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }
}
