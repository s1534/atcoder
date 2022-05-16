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
    int v, a, b, c;
    int i = 1;
    cin >> v >> a >> b >> c;
    while (1) {
        if (i % 3 == 1) {
            v -= a;
            if (v < 0) {
                cout << "F";
                return 0;
            }
        }
        if (i % 3 == 2) {
            v -= b;
            if (v < 0) {
                cout << "M";
                return 0;
            }
        }
        if (i % 3 == 0) {
            v -= c;
            if (v < 0) {
                cout << "T";
                return 0;
            }
        }
        i++;
    }
}
