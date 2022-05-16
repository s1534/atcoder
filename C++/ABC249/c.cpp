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
    int n, k;
    cin >> n >> k;
    vector<string> s;
    vector<int> size;
    // for(int i = 0;i<n;i++) cin>> s.at(i);
    rep(i, n) {
        string tmp;
        cin >> tmp;
        size.push_back(tmp.size());
        s.push_back(tmp);
    }
    int ans = 0;

    for (int bit = 0; bit < (1 << n); ++bit) {
        map<char, int> aaa;
        set<char> abc;
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1 << i)) {
                string moji = s.at(i);
                // cout << moji << ' ' << moji.size()<< endl;
                rep(j, moji.size()) {
                    aaa[moji.at(j)]++;
                    abc.insert(moji.at(j));
                }
                S.push_back(i);
            }
        }
        int ans_tmp = 0;
        for (auto itr = aaa.begin(); itr != aaa.end(); ++itr) {
            if (itr->second == k) ans_tmp++;
        }

        ans = max(ans, ans_tmp);

        //     cout << bit << ": {";
        //     for (int i = 0; i < (int)S.size(); ++i) {
        //         cout << S[i] << " ";
        //     }
        //     cout << "}" << endl;
        // }
    }
    cout << ans;
}
