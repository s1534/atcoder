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
    vector<int> w(n);
    rep(i, n) cin >> w.at(i);

    bool dp[200][20000];

    rep(i, 200) {
        rep(j, 20000) { dp[i][j] = false; }
    }

    dp[0][0] = true;

    rep(i, n) {
        for (int j = 0; j <= m; j++) {
            if (!dp[i][j]) continue;
            dp[i + 1][j] = true;
            if (dp[i][j]) {
                dp[i][j + w.at(i)] = true;
            }
        }
    }

    if (dp[n][m])
        cout << "Yes";
    else
        cout << "No";
}
