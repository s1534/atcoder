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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int ans1 = 0;
    int ans2 = 0;
    int tmp1 = a, tmp2 = d;
    int num1 = c, num2 = f;

    rep(i, x) {
        if (tmp1 > 0) {
            ans1 += b;
            tmp1--;
            if (tmp1 == 0) {
                num1 = c;
            }

        } else {
            num1--;
            if (num1 == 0) tmp1 = a;
        }
        if (tmp2 > 0) {
            ans2 += e;
            tmp2--;
            if (tmp2 == 0) num2 = f;
        } else {
            num2--;
            if (num2 == 0) tmp2 = d;
        }

        // cout << ans1 <<' ' << ans2 << endl;
    }

    if (ans1 > ans2) {
        cout << "Takahashi";
    } else if (ans1 < ans2) {
        cout << "Aoki";
    } else
        cout << "Draw";
}
