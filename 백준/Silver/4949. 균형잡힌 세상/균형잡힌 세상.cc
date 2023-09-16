#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(true) {
		string s;
		getline(cin, s);
		if(s == ".") break;
		stack<int> stk;
		bool check = true;
		for(char c : s) {
			if(c == ')') {
				if(stk.size() == 0 || stk.top() == '[') {
					check = false;
					break;
				} else {
					stk.pop();
				}
			}
			
			if(c == ']') {
				if(stk.size() == 0 || stk.top() == '(') {
					check = false;
					break;
				} else {
					stk.pop();
				}
			}
			if(c == '(') stk.push(c);
			else if (c == '[') stk.push(c);
		}
		if(stk.size() == 0 && check) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}