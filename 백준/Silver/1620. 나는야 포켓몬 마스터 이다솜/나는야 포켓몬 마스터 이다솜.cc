#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
string q;
map<string,int> mp_s;
map<int,string> mp_i;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m; // 100,000
	for(int i = 1 ; i <= n ; i++) {
		cin >> s;
		mp_s[s]=i;
		mp_i[i]=s;
		
	}
//	for(auto it : mp_i) cout << it.first << ' ' << it.second << '\n';
//	for(auto it : mp_s) cout << it.first << ' ' << it.second << '\n';
	for(int i = 1 ; i <= m ; i++) {
		cin >> q;
		if(atoi(q.c_str())) { // 만약 숫자로 퀴즈가 주어졌다면  
			cout << mp_i[atoi(q.c_str())] << '\n'; // 문자로 출력 
		} else { 
			cout << mp_s[q] << '\n'; // 숫자로 출력  
		}
	}
	return 0;
	
}