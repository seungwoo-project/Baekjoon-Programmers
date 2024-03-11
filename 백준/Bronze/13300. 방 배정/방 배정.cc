#include <bits/stdc++.h>
using namespace std;
int a[2][6]; // 성별 학년 
int ret, n, k, s, y;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> s >> y; // s : 성별 , y : 학년
		a[s][y]++;
	}
	
	for(int i = 0 ; i < 2 ; i++) {
		for(int j = 0 ; j < 6 ; j++) {
			if(a[i][j] == 1) ret++;
			else if(a[i][j] % k == 0) ret += a[i][j] / k;
			else ret = ret + (a[i][j] / k + 1); 
		}
	}
	
	cout << ret;
}