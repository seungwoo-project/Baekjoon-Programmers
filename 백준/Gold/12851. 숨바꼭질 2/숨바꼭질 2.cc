#include <bits/stdc++.h>
using namespace std;
int a , k, b, visited[200004], cnt[200004];
queue<int> q;
int main() {
	cin >> a >> b;
	
	visited[a] = 1;	
	cnt[a] = 1;
	q.push(a);
	while(q.size()) {
		k = q.front(); q.pop();
		for(int tmp : {k+1, k-1, k*2}) {
			if(tmp < 0 || tmp > 200000) continue;
			if(visited[tmp] == visited[k] + 1) { // 만약 이미 방문되어 있던 곳을 또 방문한다면 
				cnt[tmp] = cnt[tmp] + cnt[k];
			}
			if(visited[tmp]) continue; // 만약 방문되어 있다면 패스
			 visited[tmp] = visited[k] + 1;
			 cnt[tmp] = cnt[tmp] + cnt[k]; 
			 q.push(tmp);
		}
	}
	
	cout << visited[b] - 1 << '\n';
	cout << cnt[b];
	return 0;
}