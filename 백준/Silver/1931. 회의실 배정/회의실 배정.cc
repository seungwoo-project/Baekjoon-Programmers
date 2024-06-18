#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
      int s, e;
      cin >> s >> e;
      v.push_back({s, e});
  }
  sort(v.begin(), v.end(), cmp);
  int end = v[0].second;
  int cnt = 1;
  for(int i = 1 ; i < n ; i++) {
      if(v[i].first >= end) {
          cnt++;
          end = v[i].second;
      }
  }
  cout << cnt;
}