#include <bits/stdc++.h>
using namespace std;
int t,n;
int ret;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	for(int i = 0 ; i < t ; i++) {
		ret = 0;
		cin >> n;
		// 2의 개수 5의 개수 세어서 min값 추출하면 답
		for(int j = 5 ; j <= n ; j*=5) {
			ret+=n/j;
		}
		cout << ret << '\n'; 
	}
	return 0;
}