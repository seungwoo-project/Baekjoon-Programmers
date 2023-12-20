#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int ret[10];
int main() {
	cin >> a >> b >> c;
	int n = a*b*c;
	string s = to_string(n);
	for(char c : s) {
		ret[c - '0']++;
	}
	
	for(int i : ret) cout << i << '\n';
	return 0;
}