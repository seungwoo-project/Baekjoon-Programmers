#include <bits/stdc++.h>
using namespace std;
int a[10][2]; // 성별 학년 
int ret, n, k, s, y;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> s >> y; // s : 성별 , y : 학년
		a[y][s]++;
	}
	
//	for(int i = 1 ; i <= 6 ; i++) {
//		for(int j = 0 ; j < 2 ; j++) {
//			cout << a[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	
	for(int i = 1 ; i <= 6 ; i++) {
		for(int j = 0 ; j < 2 ; j++) {
			if(a[i][j] == 1) ret++;
			else if(a[i][j] % k == 0) ret += a[i][j]/ k;
			else ret += a[i][j] / k + 1;
		}
	}
	cout << ret;

}
/*
16 3
1 1
0 1
1 1
0 2
1 2
0 2
0 3
1 3
1 4
1 3
1 3
0 6
1 5
0 5
1 5
1 6
*/