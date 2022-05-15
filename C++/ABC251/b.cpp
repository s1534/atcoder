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
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    // int ans = 0;
    set<int> ans;
    rep(i, n) {
        rep2(j, i + 1, n) {
            rep2(k, j + 1, n) {
                if (i == j && j == k)
                    continue;
                else {
                    // ans.insert(a.at(i)+a.at(j)+a.at(k));
                    if (a.at(i) + a.at(j) + a.at(k) <= w) {
                        int tmp = a.at(i) + a.at(j) + a.at(k);

                        ans.insert(tmp);
                    }
                }
            }
        }
    }
    rep(i, n) {
        rep2(j, i + 1, n) {
            if (i == j)
                continue;
            else {
                if (a.at(i) + a.at(j) <= w) {
                    int tmp = a.at(i)+a.at(j);
                    ans.insert(tmp);
                }
            }
        }
    }
    rep(i, n) {
        if (a.at(i) <= w) ans.insert(a.at(i));
    }
    cout << ans.size();
}
