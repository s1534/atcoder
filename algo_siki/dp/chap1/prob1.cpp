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
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(10000);
    a.at(0) = x;
    a.at(1) = y;
    rep2(i,2,n){
        a.at(i) = (a.at(i-1) + a.at(i-2))%100;
    }
    cout << a.at(n-1);
}
