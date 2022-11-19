#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> b(K);

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        b[i % K].push_back(a[i]);
    }
    // for (auto& a : b) {
    //     for (auto& c : a) {
    //         cout << c << ' ';
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < K; i++) {
        sort(b[i].rbegin(), b[i].rend());
    }

    sort(a.begin(), a.end());

    vector<int> na;
    for (int i = 0; i < N; i++) {
        na.push_back(b[i % K].back());
        b[i % K].pop_back();
    }
    for(auto&i:na){
        cout << i << ' ';
    }
    cout << endl;
    if (a == na)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
