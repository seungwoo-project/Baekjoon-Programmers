#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	
	while(1) {
		vector<long long> v;
		int a,b,c;
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		if(v[0] <= 0 && v[1] <= 0 && v[2] <= 0) return 0;
		
		if(v[2] * v[2] == v[0] * v[0] + v[1] * v[1]) {
			cout << "right" << '\n';
		} else {
			cout << "wrong" << '\n';
		}
	}
	return 0;
}