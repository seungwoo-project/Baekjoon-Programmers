#include <bits/stdc++.h>
using namespace std;
int n, m, board[504][504], visited[504][504], y, x;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int mx = 0, cnt;
int bfs(int y, int x) {
	int sum = 0;
	queue<pair<int,int>> q;
	q.push({y,x});
	visited[y][x] = 1;
	sum++;
	while(q.size()) {
		tie(y,x) = q.front(); q.pop();
//		cout << "y : " << y << "x : " << x << '\n';
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(visited[ny][nx] || !board[ny][nx]) continue;
			visited[ny][nx] = 1;
			sum++;
			q.push({ny,nx});
		}
	}
	return sum;
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> board[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(visited[i][j] || board[i][j] == 0) continue;
			int ret = bfs(i,j);
			if(ret > mx) mx = ret;
			cnt++;
		}
	}	
	
	cout << cnt << '\n' << mx;
	return 0;
}