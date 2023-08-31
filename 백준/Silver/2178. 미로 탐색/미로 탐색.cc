#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0,1,0,-1}, dy[] = {-1,0,1,0};
int a[104][104], visited[104][104];
int n , m , ny , nx, y, x;
string s;
queue<pair<int,int>> q;
int main() {
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) {
		cin >> s;
		for(int k = 1 ; k <= s.size() ; k++) {
			a[i][k] = s[k-1]-48;
		}
	}
	// 너비우선탐색 최단거리 bfs queue
	visited[1][1] = 1;
	q.push({1,1}); 
	while(q.size()){
	    tie(y,x) = q.front(); q.pop();
		for(int i = 0 ; i < 4 ; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 1 || ny > n || nx < 1 || nx > m) continue;
		if(a[ny][nx] == 0) continue;
		if(visited[ny][nx]) continue;
		visited[ny][nx] = visited[y][x] + 1;
		q.push({ny,nx});
		}
	}
	
	
	cout << visited[n][m];
	return 0;
}