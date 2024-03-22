#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ret;
vector<int> v;
int a;
int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0 ; i < n ; i++) {
		ret.push_back({i+1, v[i]});
	}
	long long sum = 0;
	for(auto it : ret) {
		if(it.first != it.second) {
			sum += abs(it.first - it.second);
		}
	}
	
	cout << sum;
	
	return 0;
}