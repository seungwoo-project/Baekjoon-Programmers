#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int k;
string s;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--) {
		cin >> s;
		
		if(s == "push") {
			cin >> k;
			stk.push(k);
		} else if(s == "pop") {
			if(stk.empty()) cout << -1 << '\n';
			else {
				int npop = stk.top();
				stk.pop();
				cout << npop << '\n';
			}
		} else if(s == "top") {
			if(stk.empty()) cout << -1 << '\n';
			else cout << stk.top() << '\n';
		} else if(s == "size") {
			cout << stk.size() << '\n';
		} else {
			if(stk.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
	}
}