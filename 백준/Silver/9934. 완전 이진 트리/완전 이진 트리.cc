#include <bits/stdc++.h>
using namespace std;
int n, a[1030];
vector<int> v[11]; 
void go(int s ,int e , int level) {
	if(s > e) return ; // s가 e보다 높을 순 없으니 안됨
	if(s == e) {
		v[level].push_back(a[s]); // 앞 과 끝이 같다면 mid는 앞과 뒤 의 값이 됨 값 푸쉬 
		return ;
	} 
	
	int mid = (s+e) / 2; // 중간값을 레벨별로의 벡터에 넣음
	v[level].push_back(a[mid]);
	go(s,mid-1,level+1); // 중간값을 기준으로 왼쪽값의 미드값체크
	go(mid+1,e,level+1); // 중간값을 기준으로 오른쪽값의 미드값체크  
	return ;
} 
int main() {
	cin >> n;
	int k = pow(2,n) - 1;
	for(int i = 0 ; i < k ; i ++) {
		cin >> a[i];
	}
	
	go(0,k-1,1); // 0 : start , k : end , 1 : level
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j : v[i]) cout << j << ' ';
		cout << '\n';
	}
	return 0;
}