#include<bits/stdc++.h>
using namespace std;
int s_visited[200004];
int n,k;
int main() {
	cin >> n >> k;
	s_visited[n] = 1;
	queue<int> q;
	q.push(n);
	
	while(q.size()) {
		int x = q.front(); q.pop();
		for(int i : {x-1, x+1, 2*x}) {
			if(i < 0 || i > 100000) continue;
			if(s_visited[i]) continue;
			s_visited[i] = s_visited[x] + 1;
			if(i == k) break;
			q.push(i);
		}
	}
	
	cout << s_visited[k] - 1;
	return 0;
}