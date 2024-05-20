#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10];
int isused[10];
vector<int> v;
set<vector<int>> pre;
void go(int start) {
  if (v.size() == k) {
    pre.insert(v);
    return;
  }

  int nxt = 0;
  for (int i = start + 1; i < n; i++) {
    if (!isused[i]) {
      isused[i] = 1;
      v.push_back(a[i]);
      go(i);
      v.pop_back();
      isused[i] = 0;
    }
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  go(-1);

  for (auto i : pre) {
    for (auto j : i) cout << j << " ";
    cout << '\n';
  }
  return 0;
}