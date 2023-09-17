#include <bits/stdc++.h>
using namespace std;
int n,m,nx,ny;
int a[104][104], visited[104][104], temp[104][104];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int cnt;
int pre;
int flag;
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0 ; i < 4 ; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if(a[ny][nx] == 1) {
			a[ny][nx] = 0;
			visited[ny][nx] = 1;
			flag++;
		}
		if(visited[ny][nx]) continue;
		
		dfs(ny,nx);
	}
}
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}
	
	while(1) {
		pre = flag;
		flag = 0;
		memset(visited,0,sizeof(visited));
		dfs(0,0);
		if(flag == 0) break;
		cnt++;
	}
	
	cout << cnt << '\n';

	
	cout << pre << '\n';
	return 0;
}