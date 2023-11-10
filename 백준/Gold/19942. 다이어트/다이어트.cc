#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, fp, ff, fs, fv, ret = INF;
struct A {
	int p;
	int f;
	int s;
	int v;
	int c;
}a[20];
map<int,vector<vector<int>>> ret_v;
int main() {
	cin >> n;
	cin >> fp >> ff >> fs >> fv;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i].p >> a[i].f >> a[i].s >> a[i].v >> a[i].c;
	}
	
	for(int i = 0 ; i < (1 << n) ; i++) {
		vector<int> v;
		int sp = 0 , sf = 0 , ss = 0 , sv = 0 , sc = 0;
		for(int j = 0 ; j < n ; j++) {
			if(i & (1 << j)) {
				v.push_back(j+1);
				sp += a[j].p;
				sf += a[j].f;
				ss += a[j].s;
				sv += a[j].v;
				sc += a[j].c;
			}
		}
		if(sp >= fp && sf >= ff && ss >= fs && sv >= fv) {
			if(ret >= sc) {
				ret = sc;
				ret_v[ret].push_back(v);
			}
		}
	}
	
	if(ret == INF) {
		cout << -1;
	} else {
		cout << ret << '\n';
		sort(ret_v[ret].begin(),ret_v[ret].end());
		for(int i : ret_v[ret][0]) cout << i << ' ';
	}
	return 0;
}