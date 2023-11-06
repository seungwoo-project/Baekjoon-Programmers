#include <bits/stdc++.h>
using namespace std;
int n, m, h, a, b, visited[34][14];
int ret = 987654321;
bool check() {
	for(int i = 1 ; i <= n ; i++) {
		int start = i;
		for(int j = 1 ; j <= h ; j++) {
			if(visited[j][start]) start++;
			else if(visited[j][start-1]) start--;
		}
		if(start != i) return false;
	}
	return true;
} 

void go(int here, int cnt) {
	if(cnt > 3 || ret <= cnt) return ; // cnt 가 3보다 큰 값이면 -1출력 또는 백트래킹 ret이 최솟값을 결정하는 요인이므로 cnt가 더 크거나 같으면 가지치기
	if(check()) {
		ret = min(ret,cnt);
		return ;
	} 
	
	for(int i = here ; i <= h ; i++) {
		for(int j = 1 ; j <= n ; j++) {
			if(visited[i][j] || visited[i][j-1] || visited[i][j+1]) continue;
			visited[i][j] = 1;
			go(i, cnt+1);
			visited[i][j] = 0;
		}
	}
}
int main() {
	cin >> n >> m >> h;
	for(int i = 0; i < m ; i++) {
		cin >> a >> b;
		visited[a][b] = 1;
	}
	
	go(1,0);
	if(ret != 987654321) cout << ret;
	else cout << -1;
	return 0;
}