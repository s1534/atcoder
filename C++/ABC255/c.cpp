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
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int ans = 0;
    rep2(i, 1, 31) {
        rep2(j, 1, 31) {
            rep2(k, 1, 31) {
                rep2(l, 1, 31) {
                    int c = h1 - i - j;
                    int f = h2 - k - l;
                    int g = w1 - i - k;
                    int h = w2 - j - l;
                    int m = h3 - g - h;
                    if (w3 == c + f + m &&
                        min(c, min(f, min(g, min(h, m)))) > 0) {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans;
}
