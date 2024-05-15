#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10];
int isused[10004];
vector<int> v;
void go(int start) {
  if (v.size() == k) {
    for (int i : v) cout << i << " ";
    cout << '\n';
    return;
  }

  for (int i = start + 1; i < n; i++) {
    if (isused[a[i]]) continue;
    v.push_back(a[i]);
    isused[a[i]] = 1;
    go(start);
    v.pop_back();
    isused[a[i]] = 0;
  }
  return;
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  go(-1);
  return 0;
}