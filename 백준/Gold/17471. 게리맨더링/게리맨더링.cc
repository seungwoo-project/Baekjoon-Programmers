#include <bits/stdc++.h>
using namespace std;
vector<int> adj[14];
const int INF = 1e9;
int n, q, w, p[14], color[14], visited[14], ans = INF;
pair<int,int> go(int here, int value) {
	visited[here] = 1;
	pair<int,int> ret = {1,p[here]}; // 각 노드의 카운트와 인구수를 저장 
	for(int there : adj[here]) {
		if(color[there] != value) continue;
		if(visited[there]) continue;
		pair<int,int> temp = go(there, value);
		ret.first += temp.first; // 각 노드 카운트를 셈 
		ret.second += temp.second; // 각 노드의 인구수를 누적 
	}
	return ret; 
}
int main() {
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		cin >> p[i]; // 인구수 
	}
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> q;
		for(int j = 0 ; j < q ; j++) {
			cin >> w;
			adj[i].push_back(w); 
		}
	}
	// 다 뽑아버리거나 하나도 안뽑으면 안됨. 
	for(int i = 1 ; i < (1 << n) - 1 ; i++) {
		//각 조합테케마다 색칠한것과 방문한것을 초기화 
		memset(color,0,sizeof(color));
		memset(visited,0,sizeof(visited));
		int idx1 = -1; int idx2 = -1;
		for(int j = 0 ; j < n ; j++) {
			// 색칠하는 과정 
			if(i & (1 << j)) {
				color[j+1] = 1;
				idx1 = j+1;
			} else {
				idx2 = j+1;
			}
		}
		pair<int,int> color1 = go(idx1, 1); // 색칠되어있는애 dfs 
		pair<int,int> color2 = go(idx2, 0); // 색칠 x dfx 
		if(color1.first + color2.first == n) ans = min(ans,abs(color1.second-color2.second));
	}
	
	if(ans == INF) cout << -1;
	else cout << ans;
	return 0;
}