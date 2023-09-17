#include <bits/stdc++.h>
using namespace std;
int a[10][10], visited[10][10], temp[10][10];
int n , m , ny , nx;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int mx;
void dfs(int y , int x) {
	visited[y][x] = 1;
	for(int i = 0 ; i < 4 ; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || ny >=n || nx < 0 || nx >=m) continue;
		if(temp[ny][nx] == 1) continue;
		if(visited[ny][nx] == 1) continue;
		temp[ny][nx] = 2;
		dfs(ny,nx);
	}
	return ;
}
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}
	
	for(int i = 0 ; i < n*m ; i++) {
		for(int j = i + 1 ; j < n*m ; j++) {
			for(int k = j + 1 ; k < n*m ; k++) {
				// 벽 세우기 ( 조합 활용 )  
				if(a[i/m][i%m] == 0 && a[j/m][j%m] == 0 && a[k/m][k%m] == 0) {
					int cnt = 0;
					memcpy(temp,a,sizeof(a)); // 배열 복사 
					memset(visited,0,sizeof(visited)); // 방문 초기화 
					temp[i/m][i%m] = 1;
					temp[j/m][j%m] = 1;
					temp[k/m][k%m] = 1;
					
					// 바이러스 퍼트리기 (탐색) 
					for(int a = 0 ; a < n ; a++) {
						for(int b = 0 ; b < m ; b++) {
							if(temp[a][b] == 2 && visited[a][b] == 0) dfs(a,b);
						}
					}
					
					// 0의 개수 세기 
					for(int i = 0 ; i < n ; i++) {
						for(int j = 0 ; j < m ; j++) {
							if(temp[i][j] == 0) {
								cnt++;
							}
						}
					}
					
					if(cnt > mx) mx = cnt;
				}
			}
		}
	} 
	
	
	cout << mx;
	
	return 0;
}