#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main() {
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    rep(i, s.size()) {
        if (i == a - 1) {
            cout << s.at(b - 1);
        } else if (i == b - 1) {
            cout << s.at(a - 1);
        } else
            cout << s.at(i);
    }
}
