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
    int n;
    cin >> n;

    set<int> flag;

    rep(i, n * 2 + 1) { flag.insert(i + 1); }

    cout << 1 << endl;
    flag.erase(1);

    while (1) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) {
            return 0;
        }
        flag.erase(tmp);
        auto itr = flag.begin();
        int ans = *itr;
        flag.erase(ans);

        cout << ans << endl;
    }
}
