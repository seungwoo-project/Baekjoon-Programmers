#include <bits/stdc++.h>
using namespace std;
int a[9];
void solve() {
	int sum=0;
	for(int i = 0 ; i < 7 ; i++) {
		sum += a[i];
	}
	
	if (sum == 100) {
		for(int i = 0 ; i < 7 ; i++) {
			cout << a[i] << '\n';
		}
		exit(0);
	}
	return ;
}
int main() {
	for(int i = 0 ; i < 9 ; i++) {
		cin >> a[i];
	}
	sort(a,a+9);
	do{
		solve();
	} while(next_permutation(a,a+9));
	return 0;
}