#include <bits/stdc++.h>
using namespace std;
int n;
string a[54];

bool cmp(string& q, string& w) {
  int cnt1 = 0, cnt2 = 0;
  if (q.size() != w.size())
    return q.size() < w.size();
  else {
    for (int i = 0; i < q.size(); i++) {
      if (q[i] >= '0' && q[i] <= '9') {
        cnt1 += q[i] - '0';
      }
    }

    for (int i = 0; i < w.size(); i++) {
      if (w[i] >= '0' && w[i] <= '9') {
        cnt2 += w[i] - '0';
      }
    }

    if (cnt1 == cnt2) {
      return q < w;
    }

    return cnt1 < cnt2;
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << a[i] << '\n';
  }

  return 0;
}