#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int a;
int sum;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n ; i++) {
		dq.push_back(i);
	}
	
	for(int i = 0 ; i < m ; i++) {
		cin >> a;
		int cnt = 0;
		int b = dq.size()/2;
		while(dq.front() != a) {
			dq.push_back(dq.front());
			dq.pop_front();
			cnt++; 
			
		}
		if(cnt > b) sum += dq.size() - cnt;
		else sum += cnt;
		dq.pop_front(); 
		
		
		
	}
	cout << sum;
	return 0;
}

