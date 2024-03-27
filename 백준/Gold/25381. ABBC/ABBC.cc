#include <bits/stdc++.h>
using namespace std;
int cnt,i,j; // 카운트 
int check[300004];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; // 1 <= s <= 300000 시간복잡도 생각 
	cin >> s;
	// 문자열 s에서 B를 찾고 그 위치를 저장
	// 다음 문자열부터 탐색하고 C를 찾으면
	// 앞에 B가 있는지 여부비교를 통해 B위치와 C위치를 지움
	
	// 다음은 A와 B를 비교
	queue<int> q; // B위치를 담은 큐  생성 
	for(i = 0 ; i < s.size() ; i++) {
		// B를 찾았다면 
		if(s[i] == 'B') { 
			q.push(i); // B위치를 큐에 저장 
		} else if(!q.empty() && s[i] == 'C') { // 앞에서 B가 있었고 C를 발견했다면
			check[q.front()] = 1; // 이 위치는 사용한 위치 
			q.pop();
			cnt++; // 카운트 업 
		} 
	}
	queue<int> qa;
	for(j= 0 ; j < s.size() ; j++) {
		// A를 찾았다면 
		if(s[j] == 'A') { 
			qa.push(j); // A위치를 큐에 저장 
		} else if(!qa.empty() && s[j] == 'B' && !check[j]) { // 앞에서 A가 있었고 B를 발견했고 사용한 위치가 아니라면 
			
			qa.pop();
			cnt++; // 카운트 업 
		} 
	}
	
	cout << cnt;
	
}