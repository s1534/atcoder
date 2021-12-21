#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main()
{
    string s;
    cin >> s;
    int num1 = s.at(0) - '0';
    int num2 = s.at(2) - '0';

    cout << num1 * num2;
}
