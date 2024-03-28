#include <bits/stdc++.h>
using namespace std;
int tc, n,sy,sx,ey,ex,y,x;
const int dx[8] = {1,2,2,1,-1,-2,-2,-1}, dy[8] = {-2,-1,1,2,2,1,-1,-2};
int visited[304][304];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> tc; // 테스트 케이스
	for(int i = 0 ; i < tc ; i++) {
		memset(visited,0,sizeof(visited));
		queue<pair<int,int>> q;
		cin >> n; // 체스판의 한 변의 길이
		cin >> sy >> sx;
		q.push({sy,sx});
		visited[sy][sx] = 1;
		cin >> ey >> ex;
		
		while(q.size()) {
			tie(y,x) = q.front(); q.pop();
			for(int i = 0 ; i < 8; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if(ny < 0 || ny >= n || nx < 0 || nx >=n) continue;
				if(visited[ny][nx]) continue;
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny,nx}); 
			}
		}
		
		cout << visited[ey][ex] - 1 << '\n';
		
		
	} 
}