#include <bits/stdc++.h>
using namespace std;
stack<char> stk;
string s;
int cnt;
int n;
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> s;
		for(char c : s) {
			if(stk.empty()) {
				stk.push(c);
			} else {
				if(stk.top()==c) {
					stk.pop();
				} else {
					stk.push(c);
				}
			}
		}
		
		if(stk.empty()) {
			cnt++; 
		} else {
			while(stk.size()) {
				stk.pop();
			}
			}
		}
	
	cout << cnt;
	return 0;
}