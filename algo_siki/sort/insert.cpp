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
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    rep(i, n - 1) {
        int pos = i + 1;
        // cout << pos << endl;
        while (pos != 0 && a.at(pos - 1) > a.at(pos)) {
            int tmp = a.at(pos - 1);
            a.at(pos - 1) = a.at(pos);
            a.at(pos) = tmp;
            pos--;
        }
        rep(i, n) cout << a.at(i) << ' ' << ' ';
        cout << endl;
    }
}
