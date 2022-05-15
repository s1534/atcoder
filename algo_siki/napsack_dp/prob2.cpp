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
    int n, a;
    cin >> n >> a;
    vector<int> w(n);
    vector<int> v(n);
    rep(i, n) cin >> w.at(i) >> v.at(i);

    int dp[110][100000];

    rep(j,n){
        dp[0][j] = 0;
    }
    rep(i, n) {
        for (int j = 0; j <= a; j++) {
            if (j >= w.at(i))
                dp[i + 1][j] = max(dp[i][j - w.at(i)] + v.at(i), dp[i][j]);
            else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[n][a] << endl;
}
