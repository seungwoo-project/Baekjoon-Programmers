#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		
		if(s == "push") {
			int m;
			cin >> m;
			q.push(m);
		} else if(s == "front") {
			if(q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		} else if(s == "back") {
			if(q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		} else if(s == "size") {
			cout << q.size() << '\n';
		} else if(s == "empty") {
			if(q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		} else if(s == "pop") {
			if(q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		} 
	}
}
