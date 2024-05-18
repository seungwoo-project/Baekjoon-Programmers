#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10];
vector<int> v;
void go(int start) {
  if (v.size() == k) {
    for (int i : v) cout << i << " ";
    cout << '\n';
    return;
  }

  for (int i = start; i < n; i++) {
    v.push_back(a[i]);
    go(i);
    v.pop_back();
  }
  return;
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  go(0);
  return 0;
}