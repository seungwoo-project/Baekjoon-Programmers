#include <bits/stdc++.h>
using namespace std;
list<char> ret;
int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		string s;
		cin >> s;
		
		auto cursor = ret.begin();
		for(char c : s) {
			if(c == '<') {
				if(cursor != ret.begin()) cursor--;
			} else if(c == '>') {
				if(cursor != ret.end()) cursor++;
			} else if(c == '-') {
				if(cursor != ret.begin()) cursor = ret.erase(--cursor);
				
				
			} else {
				ret.insert(cursor, c);
//				cout << "cursor = " << *cursor << '\n';
			}
		}
		
		for(char it : ret) cout << it;
		cout << '\n';
		
		ret.clear();
	}
	return 0;
}