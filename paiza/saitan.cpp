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

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    int height, width;
    cin >> width >> height;

    char field[height][width];
    rep(i, height) {
        rep(j, width) { cin >> field[i][j]; }
    }

    int sx, sy, gx, gy;
    for (int h = 0; h < height; ++h) {
        for (int w = 0; w < width; ++w) {
            if (field[h][w] == 's') {
                sx = h;
                sy = w;
            }
            if (field[h][w] == 'g') {
                gx = h;
                gy = w;
            }
        }
    }

    vector<vector<int> > dist(height, vector<int>(width, -1));
    dist[sx][sy] = 2;

    vector<vector<int> > prev_x(height, vector<int>(width, -1));
    vector<vector<int> > prev_y(height, vector<int>(width, -1));

    queue<pair<int, int> > que;
    que.push(make_pair(sx, sy));

    while (!que.empty()) {
        pair<int, int> current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop();

        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width)
                continue;
            if (field[next_x][next_y] == '1') continue;

            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1;
                prev_x[next_x][next_y] = x;
                prev_y[next_x][next_y] = y;
            }
        }
    }
    int ans = 0;
    // cout << ans << endl;
    int x = gx, y = gy;
    while (x != -1 && y != -1) {
        field[x][y] = 'x';
        int px = prev_x[x][y];
        int py = prev_y[x][y];
        x = px, y = py;
        ans++;
    }
    if (ans == 1)
        cout << "Fail" << endl;
    else
        cout << ans - 1 << endl;
}
