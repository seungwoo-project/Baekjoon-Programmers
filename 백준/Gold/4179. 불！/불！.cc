#include <bits/stdc++.h>
using namespace std;
int y,x;
char a[1004][1004];
int F_visited[1004][1004], J_visited[1004][1004];
queue<pair<int,int>> Fq;
queue<pair<int,int>> Jq;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int main() {
	int r,c;
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'J') {
				Jq.push({i,j});
				J_visited[i][j] = 1;
			} else if(a[i][j] == 'F') {
				Fq.push({i,j});
				F_visited[i][j] = 1;
			}
		}
	}
	
	while(Fq.size()) {
		tie(y,x) = Fq.front();
		Fq.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
			if(F_visited[ny][nx] || a[ny][nx] == '#') continue;
			F_visited[ny][nx] = F_visited[y][x] + 1;
			Fq.push({ny,nx});
		}
	}
	
	while(Jq.size()) {
		tie(y,x) = Jq.front();
		Jq.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) { // 범위에 벗어나면 탈출 
				cout << J_visited[y][x];
				return 0; 
			}
			if(J_visited[ny][nx] || a[ny][nx] == '#') continue;
			if(F_visited[ny][nx] != 0 && J_visited[y][x] + 1 >= F_visited[ny][nx]) continue;
			J_visited[ny][nx] = J_visited[y][x] + 1;
			
			Jq.push({ny,nx});
		}
	}
	
	cout << "IMPOSSIBLE";
	return 0;
}