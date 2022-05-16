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
    string s;
    cin >> s;

    map<char, int> moji;

    int flag = 1, flag1 = 0, flag2 = 0;
    rep(i, s.size()) { moji[s.at(i)]++; }

    rep(i, s.size()) {
        if (moji[s.at(i)] >= 2) {
            flag = 0;
        }
    }
    rep(i, s.size()) {
        if (s.at(i) >= 'a' && s.at(i) <= 'z') {
            flag1 = 1;
        }
        if (s.at(i) >= 'A' && s.at(i) <= 'Z') {
            flag2 = 1;
        }
    }
    // cout << flag <<" " << flag1 << ' ' << flag2 << endl;

    if (flag) {
        if (flag1) {
            if (flag2) {
                cout << "Yes";
                return 0;
                /* code */
            }
        }
    }
    cout << "No";
}
