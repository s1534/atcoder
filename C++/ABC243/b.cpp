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
    cin >> n;
    int ans1 = 0, ans2 = 0;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);
    vector<ll> ans(100000000);

    rep(i, n) {
        if (a.at(i) == b.at(i)) ans1++;
        // int tmp1 = a.at(i);
        // int tmp2 = b.at(i);
        // tmp1--;
        // tmp2--;
        // ans.at(tmp1)++;
        // ans.at(tmp2)++;
    }

    rep(i, n) {
        rep(j, n) {
            if (a.at(i) == b.at(j) && i != j) ans2++;
        }
    }

    cout << ans1 << endl << ans2;
}
