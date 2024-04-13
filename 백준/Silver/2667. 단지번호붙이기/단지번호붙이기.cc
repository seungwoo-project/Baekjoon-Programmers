#include <bits/stdc++.h>
using namespace std;
const int dx[4] = {0,1,0,-1} , dy[4] = {-1,0,1,0};
int visited[30][30];
char a[30][30];
vector<int> v;
int y,x,n,cnt;

int bfs(int y , int x) {
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push({y,x});
    int t = 0;
    while(q.size()) {
        t++;
        tie(y,x) = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(visited[ny][nx] || a[ny][nx] == '0') continue;
            visited[ny][nx] = 1;
            q.push({ny,nx});
        }
    }
    
    return t;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> a[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(visited[i][j] || a[i][j] == '0') continue;
            int ret = bfs(i,j);
            v.push_back(ret);
            cnt++;
        }
    }
    
    sort(v.begin(), v.end());
    cout << cnt << '\n';
    for(int ans : v) {
        cout << ans << '\n';
    }
    
    return 0;
}