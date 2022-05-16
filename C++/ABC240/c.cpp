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
    int n, x;
    cin >> n >> x;
    ll a[n], b[n];
    rep(i, n) cin >> a[i] >> b[i];
    bool dp[n + 1][x + 1];
    rep(i, n + 1) {
        rep(j, x + 1) { dp[i][j] = false; }
    }
    dp[0][0] = true;
    rep(i, n) {
        for (int j = 0; j <= x; j++) {
            if (dp[i][j]) {
                if (j + a[i] <= x) dp[i + 1][j + a[i]] = true;
                if (j + b[i] <= x) dp[i + 1][j + b[i]] = true;
            }
        }
    }
    if (dp[n][x])
        cout << "Yes";
    else
        cout << "No";
}
