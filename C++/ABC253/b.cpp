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
    int h, w;
    cin >> h >> w;

    vector<pair<int, int>> tmp;

    rep(i, h) {
        rep(j, w) {
            char moji;
            cin >> moji;
            if (moji == 'o') {
                tmp.push_back(make_pair(i, j));
            }
        }
    }
    int x1 = tmp.at(0).first;
    int y1 = tmp.at(0).second;
    int x2 = tmp.at(1).first;
    int y2 = tmp.at(1).second;

    cout << abs(x1 - x2) + abs(y1 - y2);
}
