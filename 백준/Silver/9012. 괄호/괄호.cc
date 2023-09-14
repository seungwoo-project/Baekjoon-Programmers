#include <bits/stdc++.h>
using namespace std;
string s;
int n;
stack<char> stk;
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int flag = 0;
		cin >> s;
		for(char c : s) {
			if(stk.size() == 0) {
				if(c == ')') {
					flag = 1;
					break;
				}
				stk.push(c);
				continue;	
			}
			if(stk.top() != c) stk.pop();
			else stk.push(c);
		}
		if(stk.size() || flag) cout << "NO" << '\n';
		else cout << "YES" << '\n';
		
		while(stk.size()) {
			stk.pop();
		}
	}
	return 0;
}