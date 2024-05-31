#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll, int> mp;
int n;
ll a;
int mx = -1;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    mp[a]++;
  }

  for (auto i : mp) {
    mx = max(i.second, mx);
  }

  for (auto i : mp) {
    if (i.second == mx) {
      cout << i.first << '\n';
      return 0;
    }
  }
}