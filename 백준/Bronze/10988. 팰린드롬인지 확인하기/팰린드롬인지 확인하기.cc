#include <bits/stdc++.h>

using namespace std;
string s;
string rs;
int main() {
	cin >> s;
	for(int i =  s.length()-1 ; i>=0 ; i--) {
		rs+=s[i];
	}
	
	if(s==rs) cout << '1';
	else cout << '0';
	
	return 0;
}