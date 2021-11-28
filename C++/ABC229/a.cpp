#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()
using Graph = vector<vector<int> >;
using P = pair<int, int>;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == ".#" && s2 == "#.")
        cout << "No";
    else if(s1 == "#." && s2 == ".#")
        cout << "No";
    else
    {
        cout << "Yes";
    }
}
