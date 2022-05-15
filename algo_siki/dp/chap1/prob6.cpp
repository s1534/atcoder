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
    vector<int> d(m);
    rep(i, m) cin >> d.at(i);
    int dp[100000];
    dp[0]=true;
    rep(i, n) {
        rep(j, m) {
            if (dp[i]) {
                dp[i + d.at(j)] = true;
            }
        }
    }

    if (dp[n])
        cout << "Yes";
    else
        cout << "No";
}
