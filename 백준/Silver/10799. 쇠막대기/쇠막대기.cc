#include <bits/stdc++.h>
using namespace std;
int sum, cnt;
bool razer = false;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	stack<char> stk;
	for(char c : s) {
		if(c == '(') {
			stk.push(c);
			razer = true;
		} else if(c == ')') {
			if(razer && stk.top() == '(') {
				stk.pop();
				
				if(!stk.empty()) {
					sum += (stk.size());
				}
				razer = false;
				cnt = 0;
			} else {
				stk.pop();
				sum++;
			}
		}
	}
	
	cout << sum + cnt;
	return 0;
}
//
//()(((()())(())()))(())
//(((()(()()))(())()))(()())