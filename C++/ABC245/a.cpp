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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c && b == d) {
        cout << "Takahashi";
        return 0;
    }

    if (a == c) {
        if (b < d) {
            cout << "Takahashi";
        } else {
            cout << "Aoki";
        }
    } else if (a < c) {
        cout << "Takahashi";
    } else {
        cout << "Aoki";
    }
}
