#include <bits/stdc++.h>
using namespace std;
int n, m, board[104][104], visited[104][104], y, x;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		cin >> s;
		for(int j = 0 ; j < m ; j++) {
			board[i][j] = s[j] - '0';
		}
	}
	queue<pair<int,int>> q;
	q.push({0,0});
	visited[0][0] = 1;
	while(q.size()) {
		tie(y,x) = q.front(); q.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(visited[ny][nx] || !board[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny,nx});
		}
	}
	cout << visited[n-1][m-1];
	return 0;
}