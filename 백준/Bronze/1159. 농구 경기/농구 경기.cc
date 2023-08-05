#include <bits/stdc++.h>
using namespace std;
string s; // 선수의 성
int a[30]; 
int n;
int cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n; // 선수의 수
	// 선수의 성 작성하기
	for(int i = 0 ; i < n ; i++) {
		cin >> s;
		a[s[0]-97]++;
	}
	for(int i = 0 ; i < 26 ; i++) {
		if(a[i]>=5) {
			cout << char(i+97);
			cnt++;
		}
	}
	if(cnt==0) cout << "PREDAJA";
	return 0;
}