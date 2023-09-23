#include <bits/stdc++.h>
using namespace std;
int n , l , r, cnt, pluss;
int a[54][54], visited[54][54];
const int dy[] = {-1,0,1,0} , dx[] = {0,1,0,-1};
vector<pair<int,int>> v;
int ret, flag;
void dfs(int y , int x) {
	v.push_back({y,x});
	visited[y][x] = 1;
	cnt++;
	pluss += a[y][x];
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
		if(abs(a[y][x] - a[ny][nx]) < l || abs(a[y][x] - a[ny][nx]) > r) continue;
		if(visited[ny][nx]) continue;
		dfs(ny,nx);
	}
}
int main() {
	cin >> n >> l >> r;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
		}
	}
	while(1) {
		flag = 0;
		memset(visited, 0 , sizeof(visited));
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				if(visited[i][j] == 0) {
					v.clear();
					cnt = 0;
					pluss = 0;
					dfs(i,j);
					if(cnt > 1) {
						flag = 1;
						for(auto i : v) {
							a[i.first][i.second] = pluss/cnt;
						}
					}
					
				}
			}
		}
		if(flag == 0) break;
		ret++;
	}
	

	cout << ret;
	return 0;
	
}