#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()
using Graph = vector<vector<int> >;
using P = pair<int, int>;

int main()
{
    ll a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        /* code */
        if ((a % 10) + (b % 10) >= 10)
        {
            cout << "Hard";
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy";
}
