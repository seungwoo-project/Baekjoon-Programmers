#include <bits/stdc++.h>
using namespace std;
int a;
int visited[100004];
int flag;
string s;
vector<char> v;
stack<int> stk;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		
		int a;
		cin >> a;
		if(visited[a]) {
			if(a == stk.top()) {
				stk.pop();
				v.push_back('-');
			} else {
				flag = 1;
				break;
			}
			
		} else {
			for(int i = 1 ; i <= a ; i++) {
				if(!visited[i]) {
					visited[i] = 1;
					stk.push(i);
					v.push_back('+');
				}
			}
			
			stk.pop();
			v.push_back('-');
		}
		
	
	}
	
	if(flag) cout << "NO" << '\n';
	else {
		for(char c : v) cout << c << '\n';
	}
	return 0;
}