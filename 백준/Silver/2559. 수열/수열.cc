#include <bits/stdc++.h>
using namespace std;
int n,k;
int x[100004];
int psum[100004];
vector<int> ret;
// n-k
// accumulate
// 시간초과  

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++) {
		cin >> x[i];
		psum[i]=psum[i-1]+x[i];
	}
	
	for(int i = k ; i <= n ; i++) {
		ret.push_back(psum[i]-psum[i-k]);
	}
	
	cout << *max_element(ret.begin(),ret.end());
	return 0;
}


// 누적합 psum

 