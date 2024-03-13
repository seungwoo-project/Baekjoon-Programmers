#include <bits/stdc++.h>
using namespace std;
list<int> a;
int b;
int main() {
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n ; i++) {
		a.push_back(i);
	}
	
	auto it = a.begin();
	it--;
	cout << "<";
	while(a.size() > 1) {
		for(int i = 0 ; i < k ; i++) {
			it++;
			if(it == a.end()) it = a.begin();
		}
		
		b = *it;
		cout << b << ", ";
		it = a.erase(it);
		it--;
	}
	
	for(int i = 0 ; i < k ; i++) {
		it++;
		if(it == a.end()) it = a.begin();
	}
		
	b = *it;

	cout << b << ">";
	return 0;
}