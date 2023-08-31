#include <bits/stdc++.h>
using namespace std;
int t,m,n,k,x,y;
const int dx[] = {0,1,0,-1} , dy[] = {-1,0,1,0};
int a[54][54];
int visited[54][54];
// 컴포넌트 문 제

void dfs(int y , int x) {
	visited[y][x] = 1;
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if(a[ny][nx] == 0) continue;
		if(visited[ny][nx]) continue;
		dfs(ny,nx);
	}
	return ;
}  
int main() {
	cin >> t;
	for(int i = 0 ; i < t ; i++) {
		int cnt = 0;
		memset(a,0,sizeof(a));
		memset(visited,0,sizeof(visited));
		cin >> m >> n >> k;
		for(int i = 0 ; i < k ; i++) {
			cin >> x >> y;
			a[y][x] = 1;
		}
		
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				if(a[i][j] && visited[i][j] == 0) {
					dfs(i,j);
					cnt++;	
				}
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}