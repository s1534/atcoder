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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> num(4);
    rep(i, n) cin >> a.at(i);
    int ans = 0;
    rep(i, n) {
        vector<int> tmp(4);
        num.at(0) = 1;
        // for (auto& b : num) cout << b << ' ';
        // cout << endl;
        rep(j, 4) {
            if (num.at(j) > 0) {
                if (j + a.at(i) >= 4) {
                    ans++;
                    tmp.at(j) -= 1;
                } else {
                    tmp.at(j + a.at(i)) += 2;
                }
            }
        }
        rep(j, 4) {
            if (tmp.at(j) < 0)
                num.at(j) = 0;
            else {
                num.at(j) = tmp.at(j);
            }
        }
        // for (auto& b : num) cout << b << ' ';
        // cout << endl;
    }
    cout << ans;
}
