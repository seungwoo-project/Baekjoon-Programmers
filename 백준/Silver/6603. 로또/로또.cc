#include <bits/stdc++.h>
using namespace std;
int k;
int a[15];
int c = 6;
void go(int start, vector<int> v) {
  if (v.size() == c) {
    for (int i : v) cout << i << " ";
    cout << '\n';
    return;
  }

  for (int i = start + 1; i < k; i++) {
    v.push_back(a[i]);
    go(i, v);
    v.pop_back();
  }

  return;
}
int main() {
  while (1) {
    vector<int> v;
    cin >> k;
    if (k == 0) return 0;
    for (int i = 0; i < k; i++) {
      cin >> a[i];
    }

    sort(a, a + k);
    go(-1, v);
    cout << '\n';
  }
}