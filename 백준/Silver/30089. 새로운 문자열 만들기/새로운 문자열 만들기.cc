#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0 ; i < t ; i++) {
		string s;
		cin >> s;
		string x1 = s;
		string x2 = "";
		reverse(s.begin(),s.end());
		if(x1 == s) { // rotator 예처럼 바로 같다면 
			cout << x1 << '\n'; // 출력후 컨티뉴 
			continue;
		} 
		for(int j = 0 ; j < s.size() ; j++) {
			x2 += x1[j]; // x1의 문자를 x2 뒤에 붙여줌  
			reverse(x2.begin(),x2.end()); // x2의 문자를 뒤집고
			string x1x2 = x1+x2; 
			string ret = x1x2; //x1과 x2자를 붙인뒤 
			reverse(ret.begin(),ret.end()); //앞에서부터 가는거와 뒤에서부터 가는거를 비교함
			if(ret == x1x2) { // 뒤집은거와 같다면 
				cout << ret << '\n'; // 출력후 브레이크 
				break;
			} else { // 아니라면 
				reverse(x2.begin(),x2.end()); // 뒤집은거 다시 원상복귀 
			}
		}
		
		
	}
}