#include <bits/stdc++.h>
using namespace std;
string s;
//Baekjoon Online Judge
//아스키코드를 활용해 대문자 소문자 아스키 제외하고는 가만히내비둠 
// 13문자 뒤에꺼 문제 -> 다시 a부터 돌아와야 함  
//  j는 왜 안될까 ?  
int main() {
	//공백입력
	getline(cin,s);
	for(char a : s) {
		if((int(a) >= 65 && int(a)<= 77) || (int(a) >= 97 && int(a)<= 109)) {
			cout << char(a+13);
		} else if (int(a)==int(' ') || (int(a)>=48 && int(a) <= 57)){
			cout << char(a);
		} else {
			cout << char(a-13);
		}
	}
	return 0;
}