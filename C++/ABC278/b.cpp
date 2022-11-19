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
    int h, m;
    cin >> h >> m;
    while (1) {
        int a1 = h / 10;
        int a2 = h % 10;
        int a3 = m / 10;
        int a4 = m % 10;

        if (a1 * 10 + a3 <= 23 && a2 * 10 + a4 <= 59) {
            cout << h << ' ' << m;
            return 0;
        }
        m++;

        if (m == 60) {
            h += 1;
            m = 0;
        }
        if (h == 24) {
            h = 0;
            m = 0;
        }

        // h++;
        // cout << h << ' ' << m << " ";
    }
    // cout << h % 10 << ' ' << m / 10;
}
