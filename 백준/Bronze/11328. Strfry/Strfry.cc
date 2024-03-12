#include <bits/stdc++.h>
using namespace std;
string a,b;
int cnt[30];
int flag;
int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> a >> b;
		
		for(char c : a) {
			cnt[c-'a']++;
		}
		
		for(char c : b) {
			cnt[c-'a']--;
		}
		
		for(int i = 0 ; i < 26 ; i++) {
			if(cnt[i] < 0 || cnt[i] > 0) flag = 1;
		}
		
		if(flag) cout << "Impossible" << '\n';
		else cout << "Possible" << '\n';

		fill(cnt, cnt+30, 0);
		flag = 0;
	}
	return 0;
}