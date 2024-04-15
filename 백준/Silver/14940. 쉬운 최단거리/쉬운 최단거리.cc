#include <bits/stdc++.h>
using namespace std;
int n,m,a[1004][1004],visited[1004][1004],y,x;
const int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
queue<pair<int,int>> q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
            if(a[i][j] == 2) {
                visited[i][j] = 1;
                q.push({i,j});
            }
        }
    }
    
    while(q.size()) {
        tie(y,x) = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(visited[ny][nx] || a[ny][nx] == 0) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(a[i][j] == 0) {
                cout << 0 << ' ';
            } else {
                cout << visited[i][j] - 1 << ' ';
            }
            
        }
        cout << '\n';
    }
    return 0;
}