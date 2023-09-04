#include <bits/stdc++.h>
using namespace std;
int n , c;
int a;
map<int, int> mp; // 어떤 값이 더 많이 카운팅 되었는지 
map<int, int> mp_first; // 누가 더 먼저 나왔는지 
vector<pair<int, int>> v; 
bool cmp(pair<int,int> a , pair<int,int> b) {
	if(a.second == b.second) return mp_first[a.first] < mp_first[b.first];
	return a.second > b.second;
}
int main() {
	cin >> n >> c;
	for(int i = 0 ; i < n ; i++) {
		cin >> a;
		mp[a]++; // 해당 숫자 몇번 나오는지 카운팅 
		if(mp_first[a] == 0) mp_first[a] = i+1; // 만약 값이 없다면 그 값 우선순위 책정시킴 (이미 값 우선순위 책정된 것은 무시) 
	}
	
	for(auto it : mp) {
		for(int i = 0 ; i < it.second ; i++) {
			v.push_back({it.first, it.second}); // it.first = 값 , it.second = 카운팅갯수
		}
		
	}
	 
	sort(v.begin(),v.end(),cmp); // 커스텀비교함수 
	for(auto it : v) cout << it.first << ' ';
	return 0;
	
}