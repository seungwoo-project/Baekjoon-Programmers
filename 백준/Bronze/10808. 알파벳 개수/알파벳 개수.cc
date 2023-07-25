#include <bits/stdc++.h>
using namespace std;
int al[26];
string a;
int main() {
	cin >> a;
	for(char c : a) {
		al[c-97] += 1;
	}
	
	for(int i : al) cout << i << ' ';
	return 0;
}

// 알파벳의 개수가 2개일때 는