#include <bits/stdc++.h>
using namespace std;
int tc; // 테스트 케이스  
int n; // 의상의 수 
string a,b;
map<string,int> mp;
int main() {
	cin >> tc;
	for(int i = 0 ; i < tc ; i++) {
		cin >> n;
		for(int i = 0 ; i < n ; i++) {
			cin >> a >> b;
			mp[b]++;
		}
		int ret=1;
		for(auto i : mp) ret*=(i.second+1);
		ret--;
		cout << ret << '\n';
		mp.clear();
	}
	return 0;
}