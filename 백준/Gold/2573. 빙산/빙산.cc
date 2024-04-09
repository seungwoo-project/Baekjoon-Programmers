#include<bits/stdc++.h>
using namespace std;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int n,m,y,x,cnt;
int a[304][304];
int visited[304][304];
int melting[304][304];
/*
1. 각 배열의 입력이 주어진다.
2. 동서남북으로 물에 맞닿은 부분들을 세어준다.
*/

void bfs(int sy ,int sx) {
    queue<pair<int,int>> q;
    visited[sy][sx] = 1;
    q.push({sy,sx});
    memset(melting,0,sizeof(melting));
    while(q.size()) {
        tie(y,x) = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(a[ny][nx] == 0) {
                melting[y][x]++;
            }
        }
        for(int i = 0 ; i < 4 ; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(visited[ny][nx] || a[ny][nx] == 0) continue;
            
            //다음 방문처리
            visited[ny][nx] = 1;
            q.push({ny,nx});
            
            
            
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    //배열의 입력이 주어진다.
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    
    
    //빙산의 덩어리 개수를 세며 녹이는 과정
    int ans = 0;
    while(1) {
        
        cnt = 0;
        ans++;
        //빙산 녹인 후의 그래프
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(a[i][j] - melting[i][j] < 0) a[i][j] = 0;
                else a[i][j] -= melting[i][j];
            }
        }
        for(int i = 0; i < n; i++) fill(visited[i], visited[i] + m, 0);
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(visited[i][j] || a[i][j] == 0) continue; //방문했다면 패스
                cnt++;
                bfs(i,j);
            }
        }
        // cout << "-------------------------\n";
        // cout << "cnt : " << cnt << '\n';
        // for(int i = 0 ; i < n ; i++) {
        //         for(int j = 0 ; j < m ; j++) {
        //             cout << a[i][j] << ' ';
        //         }
        //         cout << '\n';
        //     }
        if(cnt == 0) {
            cout << 0;
            return 0;
        } else if(cnt == 1) {
            continue;
        } else {
            break;
        }
    }
    
    cout << ans - 1;

}

