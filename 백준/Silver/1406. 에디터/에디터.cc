#include <bits/stdc++.h>
using namespace std;
string s;
char m,b;
list<char> c;
int n;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> s;
	for(char a : s) {
		c.push_back(a);
	}
	
	auto it = c.end();
	
	
	cin >> n;
	while(n--) {
		cin >> m; // 명령어
		if(m == 'L') {
			if(it != c.begin()) it--;
		}else if(m == 'D') {
			if(it != c.end()) it++;
		}else if(m == 'B') {
			if(it != c.begin()) {
				it--;
				it = c.erase(it);
			}
			
		}else if(m == 'P') {
			cin >> b;
			c.insert(it,b);
		}
	

	}
	
	for(auto it : c) cout << it;
	return 0;
}