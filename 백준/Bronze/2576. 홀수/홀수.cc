#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main() {
	for(int i = 0 ; i < 7 ; i++) {
		cin >> n;
		if(n%2 != 0) v.push_back(n);
	}
	
	if(v.size()) cout << accumulate(v.begin(),v.end(),0) << '\n' << *min_element(v.begin(),v.end());
	else cout << "-1";
}