#include <bits/stdc++.h>
using namespace std;
int a[54][54], visited[54][54];
string s[54];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int n,m;
vector<pair<int,int>> land;
vector<int> ret;
void bfs(int y, int x) {
	memset(visited,0,sizeof(visited));
	queue<pair<int,int>> q;
	visited[y][x] = 1;
	q.push({y,x});
	while(q.size()) {
		tie(y,x) = q.front(); q.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(visited[ny][nx]) continue;
			if(a[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny,nx}); 
		}
	}
	ret.push_back(visited[y][x] - 1);
}
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		cin >> s[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(s[i][j] == 'W') {
				a[i][j] = 1;
			} else {
				a[i][j] = 0;
			}
		}
	}
	// 접근 : bfs 
	 
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(a[i][j] == 0) bfs(i,j);
		}
	}
	int result = *max_element(ret.begin(),ret.end());
	cout << result;
	
	return 0;
}