#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main() {
	for(int i = 0 ; i < 5 ; i++) {
		cin >> n;
		v.push_back(n);
	}
	
	cout << (accumulate(v.begin(),v.end(),0) / v.size()) << '\n';
	sort(v.begin(),v.end());
	cout << v[2];
	return 0;
}