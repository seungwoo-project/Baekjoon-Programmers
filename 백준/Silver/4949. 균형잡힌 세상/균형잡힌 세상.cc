#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	while(true) {
		stack<char> stk;
		int flag = 0;
		getline(cin, s);
		if(s == ".") return 0;
		
		for(char c : s) {
			if(c == '(' || c == '[') {
				stk.push(c);
			} else if(c == ')') {
				if(!stk.empty() && stk.top() == '(') stk.pop();
				else {
					flag = 1;
					break;
				}
			} else if(c == ']') {
				if(!stk.empty() && stk.top() == '[') stk.pop();
				else {
					flag = 1;
					break;
				}
			}
		
		
		}
		if(!stk.empty() || flag) cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}