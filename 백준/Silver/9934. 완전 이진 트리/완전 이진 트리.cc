#include <bits/stdc++.h>
using namespace std;
int k, a[1029];
vector<int> v[1029];
void go(int s, int e , int level) {
	if(s > e) return ;
	if(s==e) {
		v[level].push_back(a[s]);
		return ;
	}
	
	int mid = (s + e) / 2;
	v[level].push_back(a[mid]);
	go(s,mid-1,level+1);
	go(mid+1,e,level+1);
}
int main () {
	cin >> k;
	int end = pow(2,k) - 1;
	for(int i = 0 ; i < end ; i++) {
		cin >> a[i];	
	}
	
	go(0,end,1);
	for(int i = 1 ; i <= k ; i++) {
		for(int j : v[i]) cout << j << ' ';
		cout << '\n';
	}
	return 0;
} 