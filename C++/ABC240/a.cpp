#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main() {
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 10)
        cout << "Yes";
    else if (a + 1 == b)
        cout << "Yes";
    else
        cout << "No";
}
