#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[54][54];
vector<pair<int,int>> house;
vector<pair<int,int>> ck;
vector<int> v;
int ret;
int mn = 100;
void combi(int start, vector<pair<int,int>> b) {
	if(b.size() == m) {
		ret = 0;
		for(int i = 0 ; i < (int)house.size() ; i++) {
			mn = 100;
			for(int j = 0 ; j < (int)b.size() ; j++) {
				int ck_dis = abs(house[i].first-b[j].first) + abs(house[i].second-b[j].second);
				if(mn > ck_dis) {
					mn = ck_dis;
				}
			}
			ret += mn;
		}
		v.push_back(ret);
		return ; 
	}
	for(int i = start + 1 ; i < (int)ck.size() ; i++) {
		b.push_back({ck[i].first,ck[i].second});
		combi(i,b);
		b.pop_back();
	}
}
int main() {
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 1) house.push_back({i,j});
			if(a[i][j] == 2) ck.push_back({i,j}); 
		}
	}
	
	// 치킨집 m개 고르고 치킨거리 구해서 도시의 치킨거리가 가장 짧은 프로그램 작성
	vector<pair<int,int>> b;
	combi(-1,b);
	
	int a = *min_element(v.begin(),v.end());
	cout << a;
	return 0;
}