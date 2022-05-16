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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);

    bool dp[300030][2];
    dp[0][0] = true;
    dp[0][1] = true;

    rep(i,n-1){
        if (dp[i][0] == true && abs(a.at(i) - a.at(i + 1)) <= k) {
            dp[i + 1][0] = true;
        }
        if (dp[i][0] == true && abs(a.at(i) - b.at(i + 1)) <= k) {
            dp[i + 1][1] = true;
        }
        if (dp[i][1] == true && abs(b.at(i) - a.at(i + 1)) <= k) {
            dp[i + 1][0] = true;
        }
        if (dp[i][1] == true && abs(b.at(i) - b.at(i + 1)) <= k) {
            dp[i + 1][1] = true;
        }
        if(dp[i+1][0] != true && dp[i+1][1] != true) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);

    bool dp[300030][2];
    dp[0][0] = true;
    dp[0][1] = true;

    rep(i, n - 1) {
        if (dp[i][0] == true && abs(a.at(i) - a.at(i + 1)) <= k) {
            dp[i + 1][0] = true;
        }
        if (dp[i][0] == true && abs(a.at(i) - b.at(i + 1)) <= k) {
            dp[i + 1][1] = true;
        }
        if (dp[i][1] == true && abs(b.at(i) - a.at(i + 1)) <= k) {
            dp[i + 1][0] = true;
        }
        if (dp[i][1] == true && abs(b.at(i) - b.at(i + 1)) <= k) {
            dp[i + 1][1] = true;
        }
        if (dp[i + 1][0] != true && dp[i + 1][1] != true) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
