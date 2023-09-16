#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	while(getline(cin,s)) {
		if(s == ".") exit(0);
		int flag = 0;
		stack<char> stk;
		stack<int> b_stk;	
		for(char c : s) {
			
			if(c == '(') {
				stk.push(c);
				b_stk.push(2); 
			} else if (c == '[') {
				stk.push(c);
				b_stk.push(3);
			} 
			if(stk.size() == 0 && (c == ')' || c == ']')) {
				flag = 1;
				break;
			} 
				if(c == ')' && b_stk.top() == 2) {
				stk.pop();
				b_stk.pop();
				} else if(c == ')' && b_stk.top() == 3) {
					flag = 1;
				}
				
				if (c == ']' && b_stk.top() == 3) {
					stk.pop();
					b_stk.pop();
				} else if (c == ']' && b_stk.top() == 2){
					flag = 1;
				}
			
		}
			
	
		if(stk.size() == 0 && flag == 0) {
			cout << "yes" << '\n';
		} else if (stk.size() || flag){
			cout << "no" << '\n';
		}
		
	}
	return 0;
}