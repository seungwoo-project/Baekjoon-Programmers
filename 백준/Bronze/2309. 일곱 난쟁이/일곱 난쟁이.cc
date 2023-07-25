#include <bits/stdc++.h>
using namespace std;
int a[9] , sum =0;
pair<int,int> ret;

int main() {
	for(int i = 0 ; i < 9 ; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a+9);
	for(int i = 0 ; i < 9 ; i++) {
		for(int j = i+1 ; j < 9 ; j++) {
			if(sum-a[i]-a[j]==100) {
				ret = {i,j};
			}
		}
	}
	
	for(int i = 0 ; i < 9 ; i++) {
		if(ret.first == i || ret.second == i) continue;
		cout << a[i] << '\n';
	}
	return 0;
}