#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[10];
int use[10];
void makepermutation(int depth) {
  if (m == depth) {
    for (int i = 0; i < m; i++) cout << a[i] << ' ';
    cout << '\n';
  }

  for (int i = 1; i <= n; i++) {
    if (!use[i]) {
      a[depth] = i;
      use[i] = 1;
      makepermutation(depth + 1);
      use[i] = 0;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  makepermutation(0);

  return 0;
}
