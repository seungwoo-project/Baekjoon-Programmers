#include <bits/stdc++.h>
using namespace std;
int n;
int ret;
bool isused1[15], isused2[30], isused3[30];
void go(int k) {
  if (k == n) {
    ret++;
    return;
  }

  for (int i = 0; i < n; i++) {
    if (isused1[i] || isused2[k + i] || isused3[k - i + n - 1]) continue;
    isused1[i] = 1;
    isused2[k + i] = 1;
    isused3[k - i + n - 1] = 1;
    go(k + 1);
    isused1[i] = 0;
    isused2[k + i] = 0;
    isused3[k - i + n - 1] = 0;
  }

  return;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  go(0);

  cout << ret;

  return 0;
}