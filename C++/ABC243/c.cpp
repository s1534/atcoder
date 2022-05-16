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
using Graph = vector<vector<int>>;
int main() {
    int n;
    cin >> n;
    vector<ll> x(n), y(n);

    map<ll, bool> l, r;

    vector<pair<ll, pair<ll, char>>> ans;

    rep(i, n) { cin >> x.at(i) >> y.at(i); }
    string s;
    cin >> s;

    rep(i, n) { ans.push_back({x.at(i), {y.at(i), s.at(i)}}); }

    sort(ALL(ans));

    rep(i, n) {
        ll xx = ans[i].first;
        ll yy = ans[i].second.first;
        char moji = ans[i].second.second;
        if (moji == 'R') {
            r[yy] = true;
        } else {
            if (r[yy]) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}
