#include <bits/stdc++.h>
using namespace std;
int a[104][104] ,temp[104][104], visited[104][104];
const int dy[] = {-1,0,1,0} , dx[] = {0,1,0,-1};
int n;
int max_c;
int max_a;
void dfs(int y, int x, int k) {
	visited[y][x] = 1;
	for(int i = 0 ; i < 4 ; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if(temp[ny][nx] - k <= 0) continue;
		if(visited[ny][nx]) continue;
		dfs(ny,nx,k); 
	}
	return; 
}

int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
		}
	}
	// 2차원 배열 a배열에서의 최대값을 구하고 최대값 - 1 부터 값을 줄여나가며 물 위로 떠오르는 육지의 개수 세기
	// 문제점 :  temp 가 원본 a배열을 계속 가지고 해서 방문처리가 다 되어있음
	 
	max_a=*max_element(&a[0][0], &a[n][n]);
	for(int k = 0 ; k < max_a ; k++) {
		int cnt= 0;
		memset(visited,0,sizeof(visited));
		memcpy(temp,a,sizeof(a)); // 배열 복사
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				if(temp[i][j]-k > 0 && visited[i][j] == 0) {
					dfs(i,j,k);
					cnt++;
				}
			}
		}
		if(cnt > max_c) max_c=cnt;
	}
	cout << max_c;
	return 0;
}