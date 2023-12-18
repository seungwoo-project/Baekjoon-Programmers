#include <bits/stdc++.h>
using namespace std;
int a,b;
int main() {
	cin >> a >> b;
	if(a < b) {
		cout << b-a-1 << '\n';
		for(int i = a+1 ; i < b; i++) {
			cout << i << ' ';
		}
	} else if (a > b) {
		cout << a-b-1 << '\n';
		for(int i = b+1 ; i < a; i++) {
			cout << i << ' ';
		}
	} else {
		cout << '0' << '\n';
	}
	
	return 0;
}