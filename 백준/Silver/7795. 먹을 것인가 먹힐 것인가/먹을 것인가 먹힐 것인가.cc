#include <bits/stdc++.h>
using namespace std;
int tc, n, m, a, b;

int main() {
  cin >> tc;
  while (tc--) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<pair<int, int>> v(n + m);  // 크기가 n+m인 벡터배열 생성
    for (int i = 0; i < n; i++) {
      cin >> a;
      v[i] = {a, 0};
    }

    for (int i = n; i < n + m; i++) {
      cin >> b;
      v[i] = {b, 1};
    }

    sort(v.begin(), v.end());
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n + m; i++) {
      if (v[i].second == 0) {
        ans += cnt;
      } else {
        cnt++;
      }
    }

    cout << ans << '\n';
  }
  return 0;
}
