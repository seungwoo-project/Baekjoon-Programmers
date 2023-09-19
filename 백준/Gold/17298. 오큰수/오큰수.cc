#include <bits/stdc++.h>
using namespace std;
int n;
int key;
stack<pair<int,int>> stk;
vector<pair<int,int>> v;
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> key;
		if(stk.size() == 0) {
			stk.push({i,key});
		} 
		else {
			if(stk.top().second >= key) {
				stk.push({i,key});
			} 
			else {
				while(stk.size() && stk.top().second < key) {
					v.push_back({stk.top().first,key});
					stk.pop();
				}
				stk.push({i,key});
				
			}
		}
	}
	while(stk.size()) {
		v.push_back({stk.top().first,-1});
		stk.pop();
	}
	sort(v.begin(),v.end());
	for(auto i : v) cout << i.second << ' ';
	return 0;
}
