#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1004];
int visited[1004];
int v,e,s,a,b;
queue<int> q;
void dfs(int s) {
	cout << s << ' ';
	visited[s] = 1;
	sort(adj[s].begin(), adj[s].end());
	for(int there : adj[s]) {
		if(visited[there]) continue;
		visited[there] = 1;
		dfs(there);
	}
}

void bfs(int s) {
	visited[s] = 1;
	q.push(s);
	while(q.size()) {
		int there = q.front(); q.pop();
		cout << there << ' ';
		for(int qthere : adj[there]) {
			if(visited[qthere]) continue;
			visited[qthere] = 1;
			q.push(qthere);
		}
		
	}
}
int main() {
	cin >> v >> e >> s;
	for(int i = 0 ; i < e ; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(s);
	memset(visited, 0, sizeof(visited));
	cout << '\n';
	bfs(s);
	return 0;
}