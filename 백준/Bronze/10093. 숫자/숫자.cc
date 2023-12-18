#include <bits/stdc++.h>
using namespace std;
int cnt;
unsigned long long int a,b;
int main() {
	cin >> a >> b;
	if(a > b) {
		cnt = a-b-1;
		cout << cnt << '\n';
		for(int i = 0 ; i < cnt ; i++) {
			cout << ++b << ' ';
		}
		
	} else if(a < b){
		cnt = b-a-1;
		cout << cnt << '\n';
		for(int i = 0 ; i < cnt ; i++) {
			cout << ++a << ' ';
		}
		
	} else {
		cout << '0';
	}
	
	return 0;
}