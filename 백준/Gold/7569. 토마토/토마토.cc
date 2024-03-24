#include <bits/stdc++.h>
using namespace std;
int dx[6] = {0,0,0,1,0,-1}, dy[6] = {0,0,-1,0,1,0}, dz[6] = {1,-1,0,0,0,0};
int visited[104][104][104], a[104][104][104];
int n,m,o,x,y,z;
int cnt;
queue<tuple<int,int,int>> q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> o;
    for(int i = 0 ; i < o ; i++) { // z축
        for(int j = 0 ; j < n ; j++) { // y축
            for(int k = 0 ; k < m ; k++) { // x축
                cin >> a[i][j][k];
                if(a[i][j][k] == 1) {
                    visited[i][j][k] = 1;
                    q.push({i,j,k});
                } else if(a[i][j][k] == -1) {
                    visited[i][j][k] = 1;
                }
            }
        }
    }
    
    while(q.size()) {
        tie(z,y,x) = q.front(); q.pop();
        for(int i = 0 ; i < 6 ; i++) {
            int nz = z + dz[i];
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(nz < 0 || nz >= o || ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(visited[nz][ny][nx] || a[nz][ny][nx] == -1) continue;
            visited[nz][ny][nx] = visited[z][y][x] + 1;
            q.push({nz,ny,nx});
        }
    }
    
    // cout << " -------------------------\n";
    // for(int i = 0 ; i < o ; i++) { // z축
    //     for(int j = 0 ; j < n ; j++) { // y축
    //         for(int k = 0 ; k < m ; k++) { // x축
    //             cout << visited[i][j][k] << ' ';
    //         }
    //         cout << '\n';
    //     }
    // }
    
    for(int i = 0 ; i < o ; i++) { // z축
        for(int j = 0 ; j < n ; j++) { // y축
            for(int k = 0 ; k < m ; k++) { // x축
                if(visited[i][j][k] == 0) {
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    
    cout << visited[z][y][x] - 1;
    return 0;
}
