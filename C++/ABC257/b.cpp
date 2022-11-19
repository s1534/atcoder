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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> now(n);
    vector<int> a(k), l(q);
    rep(i, k) {
        cin >> a.at(i);
        now.at(a.at(i) - 1) = 1;
    }
    rep(i, q) cin >> l.at(i);

    rep(i, q) {
        vector<int> tmp(n);
        if (a.at(l.at(i) - 1) == n)
            continue;
        else {
            if (now.at(a.at(l.at(i) - 1)) != 0) {
                continue;
            } else {
                now.at(a.at(l.at(i) - 1) - 1) = 0;
                now.at(a.at(l.at(i) - 1)) = 1;
                a.at(l.at(i) - 1)++;
            }
        }
    }
    rep(i, n) {
        if (now.at(i) != 0) cout << i + 1 << ' ';
    }
}
