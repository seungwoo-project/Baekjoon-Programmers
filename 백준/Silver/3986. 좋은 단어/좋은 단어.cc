#include <bits/stdc++.h>
using namespace std;
int cnt;
int main() {
	int n;
	cin >> n;
	
	while(n--) {
		stack<char> stk;
		string s;
		cin >> s;
		for(char c: s) {
			if(stk.empty()) {
				stk.push(c);
			} else {
				if(stk.top() == c) stk.pop();
				else stk.push(c);
			}
		}
		
		if(stk.empty()) cnt++;
	}
	
	cout << cnt;
}