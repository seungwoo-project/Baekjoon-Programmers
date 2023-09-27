#include <bits/stdc++.h>
using namespace std;
int n,m,a,b;
int psum[100004], c[100004];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) {
		cin >> c[i];
		psum[i] = psum[i-1] + c[i];
	}
	
	for(int i = 0 ; i < m ; i++) {
		cin >> a >> b;
		cout << psum[b] - psum[a-1] << '\n';
	}
	return 0;
}