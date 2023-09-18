#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[10004], v;
int visited[10004];
int a,b,cnt,mx;

void go(int here) {
	visited[here] = 1;
	for(int there : adj[here]) {
		if(visited[there] == 0) {
			cnt++;
			go(there);
		}
	}
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) {
		cin >> a >> b;
		adj[b].push_back(a);
	}
	
	for(int i = 1 ; i <= n ; i++) {
		if(adj[i].size()) {
			memset(visited,0,sizeof(visited));
			cnt = 0;
			
			go(i);
			if(cnt > mx) {
				mx = cnt;
				v.clear();
				v.push_back(i);
			} else if (cnt == mx) v.push_back(i);
		}
	}
	sort(v.begin(),v.end());
	for(int i : v) cout << i << ' ';

	return 0;
}