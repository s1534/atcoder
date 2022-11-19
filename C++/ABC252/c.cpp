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
    // ll ans = 0;
    vector<string> s(n);
    rep(i, n) { cin >> s.at(i); }
    map<char, int> slot;

    string first = s.at(0);
    int basyo[10][10];
    rep(i, 10) {
        rep(j, 10) { basyo[i][j] = 0; }
    }

    rep(i, 10) {
        basyo[first.at(i) - '0'][i]++;
        slot[first.at(i)] += i % 10 + 1;
    }
    // for (auto& a : slot) cout << a.second << endl;
    // cout << endl;
    rep2(i, 1, n) {
        string now_slot = s.at(i);

        rep(j, 10) {
            char now = first.at(j);
            rep(k, 10) {
                char noo = now_slot.at(k);
                if (now == noo) {
                    if (basyo[noo - '0'][k] == 0) {
                        if (slot[noo] <= k) {
                            slot[noo] = (k % 10) + 1;
                            basyo[noo - '0'][k]++;
                        }
                    } else {
                        slot[noo] += 10;
                    }
                }
            }
        }
    }
    ll ans = 1000000000;

    for (auto& a : slot) {
        // cout << a.second << endl;
        if(ans>a.second) ans = a.second;
    }
    cout << ans - 1;
}
