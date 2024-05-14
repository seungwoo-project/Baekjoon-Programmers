#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> v;
void go(int start) {
  if (v.size() == k) {
    for (int i : v) cout << i << " ";
    cout << '\n';
    return;
  }

  for (int i = start; i <= n; i++) {
    v.push_back(i);
    go(i);
    v.pop_back();
  }

  return;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  go(1);
  return 0;
}