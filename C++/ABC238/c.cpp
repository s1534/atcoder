#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;

ll calc(ll x) {
    ll mama = 998244353;
    x %= mama;

    return x % mama * (x % mama + 1) / 2 % mama;
}

long long pow22(long long x, long long n) {
    ll MOD = 998244353;
    long long ret = 1;
    while (n > 0) {
        if (n & 1)
            ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main() {
    ll mama = 998244353;
    string n;
    cin >> n;
    ll kazu = stol(n);
    ll size = n.size();
    if (size == 1) {
        cout << calc(kazu);
        return 0;
    }
    ll moji = pow22(10, size - 1);
    ll top = size - moji;
    ll sub = size - 1;
    ll ans = 0;
    rep(i, sub) {
        ll num10 = pow22(10, size - i - 1);
        // cout << num10 << endl;
        if (num10 > 10) {
            // cout << num10 - pow(10, size - i - 2) << endl;
            ans += calc(num10 - (pow22(10, size - i - 2)));
            ans %= mama;
        } else {
            // cout << num10 - 1 << endl;
            ans += calc(num10 - 1);
            ans %= mama;
        }
    }
    // cout << kazu - pow(10, size - 1) + 1 << endl;
    ans += calc(kazu - pow22(10, size - 1) + 1);
    ans %= mama;
    cout << ans;
}
