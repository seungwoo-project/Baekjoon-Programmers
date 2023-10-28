#include <bits/stdc++.h>
using namespace std;
int n;
char a[10];
int check[10];
vector<string> ret;
bool good(char x , char y , char op) {
	if(x < y && op == '<') return true;
	if(x > y && op == '>') return true;
	return false;
}
void go(int idx,string s) {
	if(idx == n+1) {
		ret.push_back(s);
		return ;
	}
	
	for(int i = 0 ; i <= 9 ; i++) { 
		if(check[i]) continue; // 사용한 숫자가 있다면 넘어가기 
		if(idx == 0 || good(s[idx-1],i + '0',a[idx-1])) {
			check[i] = 1;
			go(idx+1, s + to_string(i));
			check[i] = 0;
		}
		
	}
}
int main () {
	cin >> n ;
	for(int i = 0 ; i < n ; i++) cin >> a[i];

	go(0,"");
	sort(ret.begin(),ret.end());
	cout << ret[ret.size()-1] << '\n';
	cout << ret[0] << '\n';
	return 0;
}