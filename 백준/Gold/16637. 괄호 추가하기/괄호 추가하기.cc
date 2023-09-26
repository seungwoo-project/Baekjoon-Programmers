#include <bits/stdc++.h>
using namespace std;
int n,x,y,ret = -2e9;
char opp;
char c;
vector<int> b;
vector<int> v;
vector<char> op;
int opr(int x,int y,char pp) {
	if(pp == '+') return x+y;
	if(pp == '-') return x-y;
	if(pp == '*') return x*y;
} 
void go(vector<int> v) {
	for(int i = b.size()-1 ; i >= 0 ; i--) {
		int idx = b[i];
		x = v[idx];	y = v[idx+1]; opp = op[idx];
		v.erase(v.begin()+idx,v.begin()+idx+2);
		v.insert(v.begin()+idx,opr(x,y,opp));
	}
	
	for(int i = 0 ; i < op.size() ; i++) {
		if(find(b.begin(),b.end(),i) != b.end()) continue;
		x = v[0];	y = v[1]; opp = op[i];
		v.erase(v.begin(),v.begin()+2);
		v.insert(v.begin(),opr(x,y,opp));
	}
	ret = max(ret,v[0]);
}
// 연산자의 조합을 뽑아 연산해보자 
void combi(int start,int k) {
	if(b.size() == k) {
		go(v);
	}
	
	for(int i = start + 2 ; i < op.size() ; i++) {
		b.push_back(i);
		combi(i,k);
		b.pop_back();
	}
	
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> c; 
		if(i % 2 == 0) v.push_back(c - '0'); // 피연산자 
		else op.push_back(c); // 연산자 
		
	}
	for(int i = 1 ; i < n && i <= 5 ; i++) {
		combi(-2,i);	
	} 
	if(n == 1) cout << v[0];
	else cout << ret;
	return 0;
}
//9
//3+8*7-9*2