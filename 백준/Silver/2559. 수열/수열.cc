#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100004], psum[100004];
int max_n=-1e9;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	
	for(int i = 1 ; i <= n ; i++) {
		psum[i] = psum[i-1] + a[i];
	}
	
	for(int i = k ; i <= n ; i++) {
		max_n=max(max_n,psum[i] - psum[i-k]);
	}
	cout << max_n;
	return 0;
}