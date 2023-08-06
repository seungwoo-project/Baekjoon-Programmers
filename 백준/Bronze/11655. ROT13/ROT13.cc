#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	getline(cin,s);
	for(int i = 0 ; i < s.size() ; i++) {
		if(s[i] >= 'a' && s[i] <= 'z') {
			if(s[i]+13 > 'z') cout << char(s[i]-13);
			else cout << char(s[i]+13);
		} else if(s[i] >= 'A' && s[i] <= 'Z') {
			if(s[i]+13 > 'Z') cout << char(s[i]-13);
			else cout << char(s[i]+13);
		} else {
			cout << s[i];
		}
	}
	return 0;
}