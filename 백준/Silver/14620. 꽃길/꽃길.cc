#include <bits/stdc++.h>
using namespace std;
int n;
int a[14][14], visited[14][14], sum;
int ret = 987654321;
const int dy[] = {0,1,0,-1}, dx[] = {1,0,-1,0};
bool check(int y,int x) {
	
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx]) return false;
	}
	return true;
}
void go(int here, int cnt) {
	
	if(ret <= sum) return;
	if(cnt == 3) {
		ret = min(sum,ret);
	}
	for(int k = here + 1; k < n*(n-1) ; k++) {
		int y = k/n;
		int x = k%n;
		if(visited[y][x]) continue;
		if(check(y,x)) {
			visited[y][x] = 1;
			sum += a[y][x];
			for(int i = 0 ; i < 4 ; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				visited[ny][nx] = 1;
				sum += a[ny][nx];
			}
			go(k,cnt+1);
			visited[y][x] = 0;
			sum -= a[y][x];
			for(int i = 0 ; i < 4 ; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				visited[ny][nx] = 0;
				sum -= a[ny][nx];
			}
		}
	}
}
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
		}
	}
	go(n,0);
	cout << ret;
	return 0;
}