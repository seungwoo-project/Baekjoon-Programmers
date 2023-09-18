#include <bits/stdc++.h>
using namespace std;
int n, root;
int del;
int node[54];
int visited[54];
int cnt;
vector<int> adj[54];
int postorder(int here) {
	if(visited[here] == 0) {
		if(adj[here].size()) {
			for(int i = 0 ; i < adj[here].size() ; i++) {
				postorder(adj[here][i]);
			}
		}
		else {
			cnt++;
		}
		visited[here] = 1;
	}
	return cnt;
}
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> node[i];
		if(node[i] == -1) root = i;
	}
	cin >> del;
	if(root == del) {
		cout << 0;
		exit(0);
	}
	node[del] = -1;
	
	for(int i = 0 ; i < n ; i++) {
		adj[node[i]].push_back(i);
	}

	int ret = postorder(root);
	cout << ret;
	return 0;
}