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
    set<ll> a;
    rep(i, n) {
        ll t;
        cin >> t;
        a.insert(t);
    }
    cout << a.size();
}
