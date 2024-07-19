#include <bits/stdc++.h>
using namespace std;
int n, m, k;
char a[14][14];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
unordered_map<string, int> cnt;

void dfs(int y, int x, string s) {
    cnt[s]++;
    if(s.size() == 5) return;
    for(int i = 0 ; i < 8; i++) {
        int nx = (x + dx[i] + m) % m; // 토러스 형태 반대편으로 이동
        int ny = (y + dy[i] + n) % n;
        dfs(ny, nx, s + a[ny][nx]);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n ; i++) {
        string s;
        cin >> s;

        for(int j = 0; j < m ; j++) {
            a[i][j] = s[j];
        }
    }

    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ; j < m; j++) {
            dfs(i, j, string(1, a[i][j]));
        }
    }

    for(int i = 0 ; i < k ; i++) {
        string ret;
        cin >> ret;
        cout << cnt[ret] << '\n';
    }

}
