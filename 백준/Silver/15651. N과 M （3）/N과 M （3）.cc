#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[10];
int isuse[10];
void go(int depth) {
  if (k == depth) {
    for (int i = 0; i < k; i++) cout << a[i] << ' ';
    cout << '\n';

    return;
  }

  for (int i = 1; i <= n; i++) {
    if (isuse[i] >= k) continue;
    a[depth] = i;
    isuse[i]++;
    go(depth + 1);
    isuse[i]--;
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;

  go(0);
}