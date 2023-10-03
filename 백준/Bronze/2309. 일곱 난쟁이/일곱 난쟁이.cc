#include <bits/stdc++.h>
using namespace std;
int a;
vector<int> v;
int n =9;
bool p = false;
int main() {
	for(int i = 0 ; i < n ; i++) {
		cin >> a; // 9명 키를 다 입력받음
		v.push_back(a);
	}
	
	int sum = accumulate(v.begin(),v.end(),0);
	
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; j++) {
			if((sum-(v[i]+v[j]))==100){
				if(i<j){
					v.erase(v.begin()+j);
					v.erase(v.begin()+i);
				} else {
					v.erase(v.begin()+i);
					v.erase(v.begin()+j);
				}
				p=true;
				break;
			}
		}
		if(p) break;
	}

	
	
	sort(v.begin(),v.end());
	for(int i : v) cout << i << '\n';
	return 0;
}