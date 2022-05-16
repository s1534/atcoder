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
    int h, w;
    cin >> h >> w;
    int ans = 0;
    int r, c;
    cin >> r >> c;
    if (h == 1 && w == 1) {
        if (r == 1 && c == 1) {
            cout << 0;
            return 0;
        }
    }
    if (h == 1 && w != 1) {
        if (c == 1 || c == w) {
            cout << 1;
            return 0;
        } else {
            cout << 2;
            return 0;
        }
    }
    if (h != 1 && w == 1) {
        if (r == 1 || r == h) {
            cout << 1;
            return 0;
        } else {
            cout << 2;
            return 0;
        }
    }
    if (r == 1 && c == 1) {
        cout << '2';
        return 0;
    }
    if (c == 1 && r == h) {
        cout << '2';
        return 0;
    }
    if (r == 1 && c == w) {
        cout << '2';
        return 0;
    }

    if (c == 1) {
        cout << '3';
        return 0;
    }
    if (r == 1) {
        cout << '3';
        return 0;
    }
    if (r == h && c == w) {
        cout << '2';
        return 0;
    }
    if (r == h) {
        cout << '3';
        return 0;
    }
    if (c == w) {
        cout << '3';
        return 0;
    } else
        cout << 4;
}
