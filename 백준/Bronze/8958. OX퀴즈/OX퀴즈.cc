#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		string s;
		int sum = 0;
		int a = 1;
		cin >> s;
		for(char c : s) {
			if(c == 'O') {
				sum += a;
				a++;
			} else {
				a = 1;
			}
		}
		
		cout << sum << '\n';
	}
	
	return 0;
}