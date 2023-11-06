#include <bits/stdc++.h>
using namespace std;
char a[10][10];
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int visited[10][10];
int n,m,k;
int ret;
void go(int y , int x) {
	if(visited[0][m-1] == k) {
//		for(int i = 0 ; i < n ; i++) {
//			for(int j = 0 ; j < m ; j++) {
//				cout << visited[i][j];
//			}
//			cout << "\n";
//		}
//		cout << "=====================\n";
		ret++;
		return;
	}
	
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m  || visited[ny][nx]) continue;
		visited[ny][nx] = visited[y][x] + 1;
		go(ny,nx);
		visited[ny][nx] = 0;
	}
}
int main() {
	cin >> n >> m >> k;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'T') visited[i][j] = 1;
		}
	}
	visited[n-1][0] = 1;
	go(n-1,0);
	cout << ret;
	return 0;
}
