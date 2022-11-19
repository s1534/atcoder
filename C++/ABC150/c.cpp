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

    int tmp[n];
    rep(i, n) { tmp[i] = i + 1; }

    vector<int> p(n), q(n);
    rep(i, n) cin >> p.at(i);
    rep(i, n) cin >> q.at(i);
    int num1 = 0, num2 = 0;
    int j = 0;

    do {
        j++;
        vector<int> now(n);
        for (int i = 0; i < n; i++) {
            // cout << tmp[i];
            now.at(i) = tmp[i];
            // if (i != n - 1) cout << " ";
        }
        if (now == p) {
            num1 = j;
        }
        if (now == q) {
            num2 = j;
        }
        // cout << endl;
    } while (next_permutation(tmp, tmp + n));
    cout << abs(num1 - num2);
}
