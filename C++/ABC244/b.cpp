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
    int n;
    cin >> n;

    int x = 0, y = 0;
    int now = 0;
    rep(i, n) {
        char t;
        cin >> t;
        if (t == 'S') {
            if (now % 4 == 0) {
                x++;
            } else if (now % 4 == 1) {
                y--;
            } else if (now % 4 == 2) {
                x--;
            } else if (now % 4 == 3) {
                y++;
            }
        } else
            now++;
    }

    cout << x << ' ' << y;
}
