#include <bits/stdc++.h>
using namespace std;
/* 0,0 부터 시작
각 알파벳 마다의 카운트 a[k - 65]++ 
마지막 출력은 알파벳배열의 카운트 개수 */
int mx,x,y,r, c;
char a[24][24];
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int al[30]; 
void dfs(int y, int x, int cnt) {
	mx = max(cnt,mx);
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
		if(al[a[ny][nx] - 65] == 1) continue;
		al[a[ny][nx] - 65] = 1;
		dfs(ny,nx,cnt+1);
		al[a[ny][nx] - 65] = 0;
	}
		
	return ;
}
int main() {
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j]; 
		}
	}
	al[a[0][0] - 65] = 1;
	dfs(0,0,1);
	cout << mx << '\n';

	return 0;
}