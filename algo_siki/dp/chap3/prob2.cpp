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
    vector<int> w(n);
    rep(i, n) cin >> w.at(i);

    int dp[n+1][m+1];
    rep(i, n) {
        rep(j, m) { dp[i][j] = 0; }
    }

    dp[0][0] = 1;

    rep(i, n) {
        rep(j, m+1) {
            if (dp[i][j] == 0) continue;
            dp[i+1][j] = 1;
            if (j + w.at(i) <= m) {
                dp[i + 1][j + w.at(i)] = 1;
            }
        }
    }
    if(dp[n][m]) cout << "Yes";
    else cout << "No";
}
