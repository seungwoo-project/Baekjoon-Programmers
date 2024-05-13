#include <bits/stdc++.h>
using namespace std;
int n, s;
vector<int> v;
int a[24];
bool isused[10];
int cnt;
void go(int start, int k) {
  if (v.size() == k) {
    int sum = 0;
    for (int i : v) sum += i;
    if (sum == s) cnt++;
    return;
  }

  for (int i = start + 1; i < n; i++) {
    // if (isused[a[i]]) continue;
    v.push_back(a[i]);
    // isused[a[i]] = 1;
    go(i, k);
    v.pop_back();
    // isused[a[i]] = 0;
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    go(-1, i);
  }

  cout << cnt;
  // go(-1);
  return 0;
}