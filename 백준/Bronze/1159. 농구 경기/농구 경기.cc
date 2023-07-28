#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int cnt[30];
vector<char> v;

int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> s; // 선수의 이름을 입력받기  
		cnt[s[0]-'a']++; // 성만 추출해서 카운트
		} 
	
	
	for(int i = 0 ; i< 30 ; i++) {
		if(cnt[i] >= 5) { // 성이 5개 이상이면 푸쉬  
			v.push_back(char(i+'a'));
		}
	}
	
	if(v.size()==0) {
		cout << "PREDAJA";
	} else {
		sort(v.begin(),v.end()); // 사전순으로  
		for(char i : v) cout << i;
	}

	return 0;
}

