#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int sum;
int main() {
	int n;
	cin >> n;
	while(n--) {
		int a;
		cin >> a;
		
		if(a == 0) {
			stk.pop();
		} else {
			stk.push(a);
		}
	}
	
	while(!(stk.empty())) {
		sum += stk.top();
		stk.pop();
	}
	
	cout << sum;
	return 0;
}