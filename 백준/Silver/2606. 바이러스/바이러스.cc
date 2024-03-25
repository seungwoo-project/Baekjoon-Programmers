#include <bits/stdc++.h>
using namespace std;
vector<int> adj[104];
int cnt;
int c,s,a,b;
int visited[104];
void go(int idx) {
	visited[idx] = 1;
	for(int there : adj[idx]) {
		if(visited[there]) continue;
		cnt++;
		go(there);
	}
}
int main() {
	cin >> c;
	cin >> s;
	
	for(int i = 0 ; i < s ; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	go(1);
	
	cout << cnt;
}