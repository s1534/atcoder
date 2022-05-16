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
    int n, a, b;
    cin >> n >> a >> b;
    char m1 = '.', m2 = '#';
    int num = 0;
    rep(i, n) {
        rep(j, a) {
            rep(l, n) {
                if (l % 2 == 0) rep(k, b) {
                        cout << m1;
                    }
                else {
                    rep(k, b) { cout << m2; }
                }
            }
            num++;
            cout << endl;
        }
        char tmp;
        if (num == a) {
            tmp = m2;
            m2 = m1;
            m1 = tmp;
            num = 0;
            // cout << "aaaaa" << endl;
        }
    }
}
