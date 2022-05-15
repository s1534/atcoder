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
    int n;
    cin >> n;
    map<string, ll> table;
    map<string, ll> table2;
    vector<string> moji;

    rep(i, n) {
        string s;
        ll t;
        cin >> s >> t;
        moji.push_back(s);
        if (table[s] != 0)
            continue;
        else {
            table[s] = t;
            table2[s] = i+1;
        }
    }
    ll tmp = table[moji.at(0)];
    string aa = moji.at(0);
    int j = 0;

    for (auto& a : table) {
        // cout << a.first ;
        // cout << a.second << endl;
        if (tmp < a.second) {
            tmp = a.second;
            aa = a.first;
            // aaa = j;
        }
        j++;
    }
    cout << table2[aa];

}
