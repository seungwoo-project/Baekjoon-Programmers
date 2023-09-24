#include <bits/stdc++.h>
using namespace std;
char a[1004][1004];
int j_visited[1004][1004];
queue<pair<int,int>> jq , fq;
const int dy[] = {-1,0,1,0} , dx[] = {0,1,0,-1};
vector<int> ret;
int n,m;
void f_bfs(int y, int x) {
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if(a[ny][nx] == '#') continue;
		if(a[ny][nx] == 'F') continue;
		a[ny][nx] = 'F';
		fq.push({ny,nx});
	}
}

void j_bfs(int y ,int x) {
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m) {
			ret.push_back(j_visited[y][x]);
			continue;
		}
		if(j_visited[ny][nx]) continue;
		if(a[ny][nx] != '.') continue;
		j_visited[ny][nx] = j_visited[y][x] + 1;
		jq.push({ny,nx});
	}
}
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'J') {
				jq.push({i,j});
				j_visited[i][j] = 1;
			}
			if(a[i][j] == 'F') {
				fq.push({i,j});
			}
		}
	}
	
	while(1) {
		int k = fq.size();
		for(int i = 0 ; i < k ; i++){
			f_bfs(fq.front().first, fq.front().second);
			fq.pop();
		}
		
		int l = jq.size();
		for(int i = 0 ; i < l ; i++){
			j_bfs(jq.front().first, jq.front().second);
			jq.pop();
		}
		
		if(jq.size() == 0) break;
	}
	if(ret.size()) cout << *min_element(ret.begin(),ret.end());
	else cout << "IMPOSSIBLE";
	return 0;
}
