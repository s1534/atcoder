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
    char a[3 * n][3 * n];
    rep(i, n) {
        rep(j, n) {
            cin >> a[i][j];
            // cout << a[i][j];
            a[i + n][j] = a[i][j];
            a[i + 2 * n][j] = a[i][j];
            a[i][j + n] = a[i][j];
            a[i][j + 2 * n] = a[i][j];
            a[i + n][j + n] = a[i][j];
            a[i + 2 * n][j + n] = a[i][j];
            a[i + n][j + 2 * n] = a[i][j];
            a[i + 2 * n][j + 2 * n] = a[i][j];
        }
        // cout << endl;
    }

    // rep(i, 3 * n) {
    //     rep(j, 3 * n) { cout << a[i][j]; }
    //     cout << endl;
    // }
    vector<string> ans;
    // rep(i, 8) { ans[i] = ""; }
    int x, y;
    char max = '1';
    rep(i, n) {
        rep(j, n) {
            if (max < a[i][j]) {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    x += n;
    y += n;
    // cout << x << ' ' << y << endl;
    string x1 = "";

    // rep(j, n) { ans[0] += a[x][y + j]; }
    // cout << a[x][y];
    rep(j, n) { x1 += a[x][y + j]; }
    ans.push_back(x1);
    x1 = "";
    rep(j, n) { x1 += a[x][y - j]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x + j][y]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x - j][y]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x + j][y + j]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x - j][y + j]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x + j][y - j]; }
    ans.push_back(x1);
    x1 = "";

    rep(j, n) { x1 += a[x - j][y - j]; }
    ans.push_back(x1);
    x1 = "";

    sort(ALL(ans));
    // for (auto& b : ans) {
    //     cout << b << endl;
    // }
    cout << ans.at(7);
}
