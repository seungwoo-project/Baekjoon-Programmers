#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int a = 1;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		q.push(i);
	}
	
	while(q.size() != 1) {
		q.pop();
		a = q.front();
		q.pop();
		q.push(a);
	}
	
	cout << a ;
	return 0;
}
