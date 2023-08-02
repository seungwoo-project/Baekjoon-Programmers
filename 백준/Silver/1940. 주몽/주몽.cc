#include <bits/stdc++.h>
using namespace std;
int n,m;
int cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	cin >> m;
	int a[n] = {0,};
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = i+1 ; j < n ; j++) {
			if(a[i]+a[j]==m) cnt++;
		}
	} 
	cout << cnt;
	return 0;
}