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
    int n, q;
    cin >> n >> q;

    // int flag[n][n];
    // Graph G(n+1);
    set<pair<int, int>> g;

    rep(i, q) {
        int t, a, b;
        cin >> t >> a >> b;
        // a--;
        // b--;
        if (t == 1) {
            g.insert(pair(a, b));
        }
        if (t == 2) {
            g.erase(pair(a, b));
        }
        if (t == 3) {
            if (g.find(pair(a, b)) != g.end() &&
                g.find(pair(b, a)) != g.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    // for (auto& a : g) {
    //     cout << a.first << " " << a.second << endl;
    // }
}
