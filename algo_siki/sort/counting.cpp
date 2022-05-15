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
    vector<int> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    int max_num = 0;
    rep(i, n) { max_num = max(max_num, a.at(i)); }
    vector<int> ruiseki(max_num + 1);

    rep(i, n) { ruiseki.at(a.at(i))++; }

    rep2(i, 1, max_num + 1) {
        ruiseki.at(i) = ruiseki.at(i) + ruiseki.at(i - 1);
    }

    rep(i, n) { cout << a.at(i) << ' '; }
    cout << endl;
    rep(i, n) { cout << ruiseki.at(i) << ' '; }
    cout << endl;

    for (int i = n - 1; i >= 0; i--) {

        b.at(ruiseki.at(a.at(i)) - 1) = a.at(i);
        ruiseki.at(a.at(i))--;
    }

    rep(i, n) cout << b.at(i) << ' ';
}
