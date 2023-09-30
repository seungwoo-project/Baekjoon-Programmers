#include <bits/stdc++.h>
using namespace std;
const int MAX = 500000; // 수빈이와 동생이 있을 수 있는 끝 좌표
int visited[2][MAX + 4], a,b,ok,turn=1;
 
int main() {
	cin >> a >> b; // a는 수빈이의 좌표 b는 동생의 좌표
	//만약 수빈이와 동생좌표가 처음부터 같다면 0초밖에 안걸림 
	if(a==b) {
		cout << 0 << '\n';
		return 0;
	}  
	queue<int> q; //bfs 큐 선언 
	visited[0][a] = 1; // 처음 수빈이 좌표를 방문처리 
	q.push(a); // 큐 푸쉬 
	while(q.size()) { // 큐사이즈까지 bfs돌림 
		b+=turn; // 동생이 이동하는 가속하는 좌표 
		if(b > MAX) break; // 만약 동생이 좌표에 벗어났다면 -1처리 
		// 만약 수빈이가 동생이 있던자리를 방문을 했다면
		// 그리고 방문했던 시간이 짝수차이라면 수빈이가 x-1 -> x+1 로
		// 동생이 방문했던 곳을 다시 방문가능 
		if(visited[turn % 2][b]) { 
			ok = true;
			break;
		}
		int qsize = q.size(); // 단계별로 보는 플루드필 알고리즘
		// 원래는 정점을 방문하고 또 그 다음 정점을 방문하고 이런식이지만
		// 이거는 그냥 단계로 다 방문하고 또 단계로 방문하는 식 
		for(int i = 0 ; i < qsize ; i++) {
			int x = q.front(); q.pop();
			for(int nx : {x-1, x+1, x*2}) { // 다음에 갈 곳 
				if(nx < 0 || nx > MAX) continue; // 범위처리 
				if(visited[turn % 2][nx]) continue; // 이미 방문된곳이라면 넘김 
				visited[turn % 2][nx] = visited[turn % 2][x] + 1; 
				// 방문을 안 한 상태면 
				//최단거리와 방문처리 동시에 시켜줌 
				
				// 만약 다음에 갈 곳이 동생이 있는 좌표와 똑같다면 
				if(nx == b) {
					ok = true; // 플래그 세움 
					break;
				}
				q.push(nx); // 아니면 다시 갈 곳 찾음 
			}
			if(ok) break; // 플래그 세워져있으면 브레이크 
		}
		if(ok) break;
		turn++; // 시간증가 
	} 
	if(ok) cout << turn << '\n';
	else cout << -1 << '\n';
	return 0;
}