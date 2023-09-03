#include <bits/stdc++.h>
using namespace std;
int n , m , j, cnt, a;
int sm = 1; 
int dep;
int main() {
	cin >> n >> m;
	cin >> j;
	
	for(int i = 0 ; i < j ; i++) {
		cin >> a;
		if(a >= sm && a <= m) continue;
		else if (a > m) {
			dep = abs(a-m);
			cnt = cnt + abs(a-m);
			m = m + dep;
			sm = sm + dep;
			//cout << "m : " << m << "sm :  " << sm << '\n';
		}
		else if (a < sm) {
			dep = abs(a-sm);
			cnt = cnt + abs(a-sm);
			m = m - abs(a-sm);
			sm = sm - abs(a-sm);
		}
	}
	
	cout << cnt;
	return 0;
}