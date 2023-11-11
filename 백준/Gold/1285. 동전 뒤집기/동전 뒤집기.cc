#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n, ret = INF, b[24];
char a[24][24];
void go(int here) {
	if(here == n+1) {
		int sum = 0;
		for(int i = 1 ; i <= (1 << (n-1)) ; i*=2) {
			int cnt = 0;
			for(int j = 1 ; j <= n ; j++) {
				if(b[j] & i) cnt++;
			}
			sum += min(cnt, n-cnt);
		}
		ret = min(ret,sum);
		return ;
	}
	go(here+1);
	b[here] = ~b[here];
	go(here+1);
}
int main() {
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		int value = 1;
		for(int j = 1 ; j <= n ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'T') b[i] = b[i] | value;
			value *= 2;
		}
	}
	
	go(1);
	cout << ret;
	return 0;
}