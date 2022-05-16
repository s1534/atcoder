#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        int aa = 0;
        cin >> aa;
        cout << max(360 - aa, aa);
        return 0;
    }
    vector<int> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    // sort(ALL(a));
    int ans = 0;
    rep(i, n) {
        ans += a.at(i);
        if (ans > 360) {
            ans -= 360;
            b.at(i) = ans;
        } else
            b.at(i) = ans;
        // ans = max(ans, a.at(i + 1) - a.at(i));
    }
    // rep(i, n) { cout << b.at(i) << endl; }
    sort(ALL(b));
    // rep(i, n) cout << b.at(i) << endl;
    int mm = 0;
    rep(i, n) {
        if (i == 0) {
            mm = b.at(i);
        } else if (i != n - 1)
            mm = max(mm, b.at(i + 1) - b.at(i));
        else {
            /* code */
            mm = max(mm, 360 - b.at(i));
        }
    }
    cout << mm;
}
