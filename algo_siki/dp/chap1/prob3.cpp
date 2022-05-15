#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int> >;
int main()
{
    int n;
    cin >> n;
    int dp[1000];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    // dp[3] = 3;

    rep2(i,3,n+1){
        dp[i] = (dp[i-1] + dp[i-2]);
    }

    // rep(i,n+1){
    //     cout << dp[i] << endl;
    // }

    cout << dp[n];
}
