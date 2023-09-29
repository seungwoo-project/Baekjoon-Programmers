#include <bits/stdc++.h>
using namespace std;
int n, m;
const int MAX = 200000; 
int visited[MAX+4];
queue<int> q; 
long long cnt[MAX+4];
int main() {
	cin >> n >> m;
	if(n == m){
        puts("0"); puts("1");
        return 0; 
    } 
	visited[n] = 1;
	cnt[n] = 1;
	q.push(n);
	while(q.size()) {
		int a = q.front(); q.pop();
		for(int next : {a-1,a+1,a*2}) {
			if (0 <= next && next <= MAX) { 
                if (!visited[next]) {
                    q.push(next); 
                    visited[next] = visited[a] + 1;
                    cnt[next] += cnt[a];
                } else if (visited[next] == visited[a] + 1) {
                    cnt[next] += cnt[a];
                }
			}
		}
	}
	cout << visited[m] - 1 << '\n';
	cout << cnt[m];
	return 0;
}