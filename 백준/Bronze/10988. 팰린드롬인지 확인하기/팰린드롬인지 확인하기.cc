#include <bits/stdc++.h>
using namespace std;
string s,temp;
int main() {
	cin >> s;
	temp=s;
	reverse(s.begin(),s.end());
	if(s==temp) cout << '1';
	else cout << '0';
	return 0;
}
