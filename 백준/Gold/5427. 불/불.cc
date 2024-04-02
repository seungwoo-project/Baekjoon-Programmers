#include <bits/stdc++.h>
using namespace std;
char a[1004][1004];
int y,x;
const int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int visited[1004][1004], svisited[1004][1004];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for(int k = 0 ; k < t ; k++) {
		//테스트 케이스 할때마다 초기화
		int flag = 0;
		queue<pair<int,int>> q; // 불 
		queue<pair<int,int>> q2; // 상근 
		fill(&visited[0][0], &visited[1003][1004], 0);
		fill(&svisited[0][0], &svisited[1003][1004], 0);
		int n,m;
		cin >> m >> n;
		fill(&a[0][0], &a[1003][1004], 0); 
		
		//맵 그리기 -------------------------------------
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				cin >> a[i][j];
				if(a[i][j] == '*') { // 불이라면 
					visited[i][j] = 1;
					q.push({i,j});
				} else if(a[i][j] == '@') { // 상근이라면 
					svisited[i][j] = 1;
					q2.push({i,j});
				} 
			}
		}		
		// -----------------------------------------------
		
		
		// 불이 옮겨가는 시간과정 
		while(q.size()) {
			tie(y,x) = q.front(); q.pop();
			for(int i = 0 ; i < 4 ; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue; // 범위 밖 
				if(a[ny][nx] == '#' || visited[ny][nx]) continue; // 벽이거나 불이 이미 있다면 안감
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny,nx}); 
			} 
		}

		
		// 상근이가 불을피해 가는 과정
		while(q2.size()) {
			tie(y,x) = q2.front(); q2.pop();
			for(int i = 0 ; i < 4 ; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if(ny < 0 || ny >= n || nx < 0 || nx >= m) { // 상근이가 범위 밖으로 나갔다면 
					cout << svisited[y][x] << '\n';
					flag = 1; // 범위 밖으로 나갔다고 표시 
					break; // 브레이크 
				}
				if(a[ny][nx] == '#' || svisited[ny][nx]) continue; // 벽이거나 불이 이미 있다면 안감
				if(visited[ny][nx] != 0 && svisited[y][x] + 1 >= visited[ny][nx]) continue; // 상근이가 이동할 곳에 불이 이미 번져있다면 
				svisited[ny][nx] = svisited[y][x] + 1;
				q2.push({ny,nx}); 
			} 
			if(flag) break;
		} 
		
		if(flag == 0) cout << "IMPOSSIBLE" << '\n'; 
	}
	return 0;
}