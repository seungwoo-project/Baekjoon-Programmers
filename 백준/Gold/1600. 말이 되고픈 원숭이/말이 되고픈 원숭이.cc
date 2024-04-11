/******************************************************************************

인접한 칸으로 갈 수 있다면 계속 가기 -> 별 문제 없이 도착지점에 도착했다면 k*3을 빼주기

만약 인접한칸으로 갈 수가 없다면 말의 이동으로 장애물 뛰어넘기

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int a[204][204], visited[204][204][34];
int k,n,m,y,x,h;

queue<tuple<int,int,int>> q;

int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0}, hdx[8] = {1,2,2,1,-1,-2,-2,-1}, hdy[8] = {-2,-1,1,2,2,1,-1,-2};

int main()
{
    cin >> k;
    cin >> m >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    
    visited[0][0][0] = 1;
    q.push({0,0,0});
    
    while(q.size()) {
        tie(y,x,h) = q.front(); q.pop();
        if(h < k) {
            for(int i = 0 ; i < 8 ; i++) {
                int nx = x + hdx[i];
                int ny = y + hdy[i];
                if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                if(visited[ny][nx][h+1] || a[ny][nx]) continue;
                visited[ny][nx][h+1] = visited[y][x][h] + 1;
                q.push({ny,nx,h+1});
            }
        }
        
        for(int i = 0 ; i < 4 ; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(visited[ny][nx][h] || a[ny][nx]) continue;
            visited[ny][nx][h] = visited[y][x][h] + 1;
            q.push({ny,nx,h});
        }
    }
    
    int ans = 987654321;
    for(int i = 0 ; i <= k ; i++) {
        if(visited[n-1][m-1][i]) {
            ans = min(ans, visited[n-1][m-1][i] - 1);
        } else {
            continue;
        }
    }    
    
    if(ans == 987654321) {
        cout << -1;
        return 0;
    }
    
    cout << ans;
    return 0;
}