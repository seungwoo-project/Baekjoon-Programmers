#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		stack<char> stk;
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
		} 
	}
	
	cout << cnt;
	return 0;
}