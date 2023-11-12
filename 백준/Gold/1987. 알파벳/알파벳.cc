// 비트마스킹
 
#include <bits/stdc++.h>
using namespace std;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int ret,r,c,cnt; 
char a[24][24];

void dfs(int y, int x,int n, int cnt) {
	ret = max(ret, cnt);
	for(int i = 0 ; i < 4 ; i ++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
		int next = (1 << (a[ny][nx] - 65));
		if((n & next) == 0) dfs(ny,nx, n | next, cnt+1);		
	}
	
}
int main() {
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j];
		}
	}

	dfs(0,0,(1 << (a[0][0] - 65)), 1);
	cout << ret;
	return 0;
} 