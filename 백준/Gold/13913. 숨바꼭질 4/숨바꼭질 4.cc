#include <bits/stdc++.h>
using namespace std;
int n,k;
const int MAX = 200000;
int visited[MAX + 4];
int pre[MAX + 4];
vector<int> v;
int main() {
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	while(q.size()) {
		int now = q.front(); q.pop();
		for(int next : {now-1 , now+1 , now*2}) {
			if(next >= 0 && next <= MAX) {
				if(visited[next] == 0) {
					visited[next] = visited[now] + 1;
					pre[next] = now;
					q.push(next);
				}
			}
		}
	}
	for(int i = k ; i != n ; i=pre[i]) {
		v.push_back(i);
	}
	v.push_back(n);
	reverse(v.begin(),v.end());
	cout << visited[k] - 1 << '\n';
	for(int i : v) cout << i << ' ';
	return 0;
}