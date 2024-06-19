#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int ans, q, w, e, r;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
      cin >> q >> w >> e >> r;
      v.push_back({q*100+w, e*100+r});
  }
  
  int t = 301; // 3월 1일 부터
  while(t < 1201) { // 11월 30일까지는 피어있어야함
      int nt = t; // 꽃이 지는 시간
      for(int i = 0 ; i < n ; i++) {
          if(v[i].first <= t && v[i].second > nt) { // 이전 꽃이 지는 시간 보다 작거나 같아야 하고, 계속 반복문을 돌면서 가장 오래 피어 있는 꽃을 찾는 과정
              nt = v[i].second;
          }
      }
      
      if(nt == t) { // 더 이상 갱신 되는게 없다면 12월 1일이 되기 전에 조건에 충족한 꽃이 없으므로 0 출력
          cout << 0;
          return 0;
      }
      
      ans++; // 갱신이 되면 +1
      t = nt; // 꽃이 지는날짜를 다음 피어나는 시간으로 바꿔줌
  }
  
  cout << ans;
}
