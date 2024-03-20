/* TODO (#1#): 첫 시작점들을 큐에 넣는다.
               bfs를 돌리며 거리 업데이트를 한다.
               큐에 값이 없다면 최소거리를 출력한다 */

#include <bits/stdc++.h>
using namespace std;
int a[1004][1004], visited[1004][1004], y, x, n, m, mx;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
queue<pair<int,int>> q;
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 1) {
				q.push({i,j});
				visited[i][j] = 1;
			} else if(a[i][j] == -1) {
				visited[i][j]= 1;
			}
		}
	}
	
	while(q.size()) {
		tie(y,x) = q.front(); q.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
			if(visited[ny][nx] || a[ny][nx] == -1) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny,nx});
		}
	}
	

	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(visited[i][j] == 0) {
				cout << -1;
				return 0;
			} else {
				mx = max(mx, visited[i][j]);
			}
		}
	}
	
	cout << mx - 1;
} 