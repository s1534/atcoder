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
vector<int> enumdiv(int n) {
    vector<int> S;
    for (int i = 1; 1LL * i * i <= n; i++)
        if (n % i == 0) {
            S.push_back(i);
            if (i * i != n) S.push_back(n / i);
        }
    sort(S.begin(), S.end());
    return S;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1);
    vector<int> b(n - 1);

    int dp[n][m];
    rep(i, n) {
        rep(j, m) { dp[i][j] = -1; }
    }
    rep(i, n - 1) cin >> a.at(i);
    rep(i, n - 1) cin >> b.at(i);

    dp[0][0] = 0;

    rep(i, n - 1) {
        rep(j, m) {
            // dp[i + 1][j] = dp[i][j];

            if (dp[i][j] < 0) continue;

            if (dp[i + 1][j] < dp[i][j])
                dp[i + 1][j] = dp[i][j];

                    if (j + a.at(i) < m) {
                    dp[i + 1][j + a.at(i)] =
                        max(dp[i + 1][j + a.at(i)], dp[i][j] + b.at(i));
                }

            // else {
            //     dp[i+1][j] = dp[i][j];
            // }
        }
    }

    // rep(i, n) {
    //     rep(j, m) { cout << dp[i][j] << ' '; }
    //     cout << endl;
    // }

    if (dp[n - 1][m - 1] == 0) {
        cout << "-1";
        return 0;
    }

    cout << dp[n - 1][m - 1];
}
