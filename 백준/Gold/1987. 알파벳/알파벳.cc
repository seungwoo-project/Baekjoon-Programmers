#include <bits/stdc++.h>
using namespace std;
char a[24][24];
int check[30],mx;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int r,c;
void dfs(int y ,int x, int cnt) {
	mx = max(mx,cnt);
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
		if(check[a[ny][nx] - 65]) continue;
		check[a[ny][nx] - 65] = 1;
		dfs(ny,nx,cnt+1);
		check[a[ny][nx] - 65] = 0;
	}
}
int main() {
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j];
		}
	}
	check[a[0][0] - 65] = 1;
	dfs(0,0,1);
	cout << mx;
	return 0;
}