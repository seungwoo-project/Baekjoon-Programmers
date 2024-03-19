#include <bits/stdc++.h>
using namespace std;
string s;
stack<char> stk;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int ret = 0;
	int a = 1;
	
	cin >> s;
	
	for(int i = 0 ; i < s.size() ; i++) {
		if(s[i] == '(') {
			a *= 2;
			stk.push(s[i]);
		} else if(s[i] == '[') {
			a *= 3;
			stk.push(s[i]);
		} else if(s[i] == ')') {
			if(stk.empty() || stk.top() != '(') {
				cout << 0;
				return 0;
			} 
			if(s[i-1] == '(') {
				ret += a;
			}
			stk.pop();
			a /= 2;
		} else if(s[i] == ']') {
			if(stk.empty() || stk.top() != '[') {
				cout << 0;
				return 0;
			}
			if(s[i-1] == '[') {
				ret += a;
				
			}
			stk.pop();
			a /= 3;
		}
	}
	
	if(stk.empty()) cout << ret;
	else cout << 0;
}
