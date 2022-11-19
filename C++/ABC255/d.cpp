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
    vector<int> l(n), r(n);
    rep(i, n) cin >> l.at(i) >> r.at(i);
    vector<int> a(2 * pow(10, 5) + 10);

    rep(i, n) {
        if (a.at(l.at(i)) == 0) {
            a.at(l.at(i)) = 1;
        } else if (a.at(l.at(i)) == -1) {
            a.at(l.at(i)) = 0;
        } else {
            a.at(l.at(i)) = -1;
        }

        if (a.at(r.at(i) == 1)) {
            continue;
            // a.at(r.at(i)) =1;
        } else {
            a.at(r.at(i)) = -1;
        }
    }
    for (int i = 10; i <= 60; i += 10) {
        cout << a.at(i) << ' ';
    }
    // rep(i, 2 * pow(10, 5) + 10) {
    //     if (a.at(i) == 1) {
    //         cout << i << ' ';
    //     }
    //     if (a.at(i) == -1) {
    //         cout << i << endl;
    //     }
    // }
}
