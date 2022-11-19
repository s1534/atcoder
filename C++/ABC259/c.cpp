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
    string s, t;
    cin >> s >> t;
    int n_s = s.size();
    int n_t = t.size();
    vector<int> ans;
    vector<int> ans2;
    vector<char> ans_s;
    vector<char> ans_t;
    bool flag = true;
    int tmp = 1;
    rep(i, n_s - 1) {
        if (s.at(i) == s.at(i + 1)) {
            tmp++;
        } else {
            ans.push_back(tmp);
            tmp = 1;
            ans_s.push_back(s.at(i));
        }
        if (n_s - 2 == i) {
            ans.push_back(tmp);
            ans_s.push_back(s.at(i));
        }
    }

    tmp = 1;

    rep(i, n_t - 1) {
        if (t.at(i) == t.at(i + 1)) {
            tmp++;
        } else {
            ans2.push_back(tmp);
            tmp = 1;
            ans_t.push_back(t.at(i));
        }
        if (n_t - 2 == i) {
            ans2.push_back(tmp);
            ans_t.push_back(t.at(i));
        }
    }
    rep(i, ans_t.size()) {
        if (ans_s.at(i) != ans_t.at(i)) {
            cout << "No";
            return 0;
        }
    }
    if (ans.size() != ans2.size()) {
        cout << "No";
        return 0;
    } else {
        rep(i, ans.size()) {
            if (ans.at(i) == 1 && ans2.at(i) != 1) {
                cout << "No";
                return 0;
            }
            if (ans2.at(i) == 1 && ans.at(i) != 1) {
                cout << "No";
                return 0;
            }
            if (ans2.at(i) < ans.at(i)) {
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";
}
