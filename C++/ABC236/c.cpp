#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main() {
    int n, m;
    cin >> n >> m;
    map<string, int> s;
    vector<string> eki(n);
    rep(i, n) {
        string a;
        cin >> a;
        eki.at(i) = a;
        s[a]++;
    }
    rep(i, m) {
        string b;
        cin >> b;
        s[b]--;
    }
    // cout << s[a.at(i)]

    rep(i, n) {
        if (s[eki.at(i)] == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
