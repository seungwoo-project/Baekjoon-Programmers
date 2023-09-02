#include <bits/stdc++.h>
using namespace std;
int a[104][104] , visited[104][104];
int sx,sy,ex,ey,n,m,k;
vector<int> v;
int cnt;
int ret;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int dfs(int y, int x) {
	visited[y][x] = 1;
	ret++;
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
		if(a[ny][nx] == 1) continue;
		if(visited[ny][nx]) continue;
		dfs(ny,nx);
	}
	return ret;
}
int main() {
	cin >> m >> n >> k; // m은 y n은 x
	for(int i = 0 ; i < k ; i++) {
		cin >> sx >> sy >> ex >> ey;
		for(int i = sy ; i < ey ; i++) {
			for(int j = sx ; j < ex ; j++) {
				a[i][j] = 1;
				visited[i][j] = 1;
			}
		}
	}
	
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(a[i][j] == 0 && visited[i][j]==0) {
				ret = 0;
				cnt++;
				int result = dfs(i,j);
				v.push_back(result);
			}
		}
	}
	cout << cnt << '\n';
	sort(v.begin(),v.end());
	for(int i : v) cout << i << ' ';
	return 0;
}