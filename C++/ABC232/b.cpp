#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main()
{
    string s, t;
    cin >> s >> t;
    int tmp = s.at(0) - t.at(0);
    REP(i, s.size())
    {
        if (i == 0)
            continue;
        int tmp2 = s.at(i) - t.at(i);
        if(tmp != tmp2){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
