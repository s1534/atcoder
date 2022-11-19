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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string s2 = s + s;
    int now = 0;

    rep(i, q) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            now += x;
            now %= n;
        } else {
            // cout << n - now << endl;
            x--;

            cout << s2.at(n - now + x) << endl;
            // cout << s2.at(now + x) << endl;

            // if (x - now >= 0) {
            //     x--;
            //     cout << s2.at(x - now) << endl;
            // } else {
            //     cout << s2.at(n - x - now) << endl;
            //     // cout << s.at(x)<< endl;
            // }
        }
    }
}
