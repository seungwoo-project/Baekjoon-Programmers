#include <bits/stdc++.h>
using namespace std;
int n, a, b;
vector<pair<int, int>> v;
vector<int> ret;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back({a, b});
  }

  for (int i = 0; i < v.size(); i++) {
    int cnt = 1;
    int width = v[i].first;
    int height = v[i].second;
    for (int j = 0; j < v.size(); j++) {
      if (width < v[j].first && height < v[j].second) {
        cnt++;
      }
    }

    ret.push_back(cnt);
  }

  for (int i : ret) cout << i << " ";
  return 0;
}