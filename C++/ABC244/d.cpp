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
    string s, t;
    rep(i, 3) {
        char tmp;
        cin >> tmp;
        s += tmp;
    }
    rep(i, 3) {
        char tmp;
        cin >> tmp;
        t += tmp;
    }
    if (s == t) {
        cout << "Yes";
        return 0;
    }
    if (s == "RGB") {
        if (t == "BRG" || t == "GBR") {
            cout << "Yes";
            return 0;
        }
    }
    if (s == "RBG") {
        if (t == "BGR" || t == "GRB") {
            cout << "Yes";
            return 0;
        }
    }
    if (s == "BRG") {
        if (t == "RGB" || t == "GBR") {
            cout << "Yes";
            return 0;
        }
    }
    if (s == "GRB") {
        if (t == "RBG" || t == "BGR") {
            cout << "Yes";
            return 0;
        }
    }
    if (s == "GBR") {
        if (t == "RGB" || t == "BRG") {
            cout << "Yes";
            return 0;
        }
    }
    if (s == "BGR") {
        if (t == "RBG" || t == "GRB") {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
