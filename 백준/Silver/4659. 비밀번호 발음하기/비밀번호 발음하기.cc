#include <bits/stdc++.h>
using namespace std;
string s;
bool pass;
int m ,j ;
int cnt;
int main() {
	while(cin >> s) {
		cnt = 0 ,pass = 0, m = 0, j = 0;
		if(s == "end") exit(0);
		for(int i = 0 ; i < s.size() ; i++) {
			// 이전 문자와 같다면 
			if(s[i] != 'e' && s[i] != 'o' && s[i-1] == s[i]) {
				pass = 0;
				break;
			}
		
			// 연속된 모음과 자음이 3개인지 확인
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				pass = 1;
				m++;
				if(m == 3) break;
				j = 0;
			} else {
				j++;
				if(j == 3) break;
				m = 0;
			}
			
		}
		
		if(pass == 0 || m == 3 || j == 3) {
				cout << "<" << s << "> is not acceptable.\n";
			} else {
				cout << "<" << s << "> is acceptable.\n";
			}
		
			
	}
	
	return 0;
}