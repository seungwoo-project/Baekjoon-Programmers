#include <bits/stdc++.h>
using namespace std;
int n,m,sx,sy,ex,ey,y,x;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
string s[304];
char a[304][304];
int visited[304][304];
int ok,cnt;
void dfs(int y,int x) {
	if(visited[ey-1][ex-1]) {
		ok = 1;
		return;
	}
	visited[y][x] = 1;
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if(a[ny][nx] == '1') {
			a[ny][nx] = '0';
			visited[ny][nx] = 1;
		}
		if(visited[ny][nx]) continue;
		visited[ny][nx] = 1;
		dfs(ny,nx);
	}
}
int main() {
	cin >> n >> m; // 맵의 크기 
	cin >> sy >> sx >> ey >> ex; // 주난이의 위치와 범인의 위치 
	for(int i = 0 ; i < n ; i++) {
		cin >> s[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			a[i][j] = s[i][j]; // 맵을 char형으로 받음 
		}
	}
	
	//주난이가 이제 점프를 뜀
	while(1) {
		dfs(sy-1,sx-1);
		cnt++;
		if(ok) break;
		memset(visited,0,sizeof(visited));
	}
	cout << cnt;
	return 0;
}