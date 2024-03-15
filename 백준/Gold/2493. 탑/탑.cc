#include <bits/stdc++.h>
using namespace std;
stack<pair<int,int>> stk;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	
	stk.push({100000001,0});
	for(int i = 1 ; i <= n ; i++) {
		int height;
		cin >> height;
		
		while(stk.top().first < height) {
			stk.pop();
		}
		cout << stk.top().second << ' ';
		stk.push({height,i});
	}
	return 0;
}