#include <bits/stdc++.h>
using namespace std;
int n;
string key, m, s, e, a;
int pos;
vector<string> ret;
int main() {
	cin >> n;
	cin >> key;
	pos = key.find("*");
	s=key.substr(0,pos);
	e=key.substr(pos+1);
	a=s+e;
	for(int i = 0 ; i < n ; i++) {
		cin >> m;
		if((m.length()>=a.length()) && (s==m.substr(0,s.length())) && (e==m.substr(m.length()-e.length()))) ret.push_back("DA");
		else ret.push_back("NE");
	}
	
	for(string i : ret) cout << i << '\n';
	return 0;
}