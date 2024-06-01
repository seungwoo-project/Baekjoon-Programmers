#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
string s;
vector<ll> v;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    reverse(s.begin(), s.end());
    v.push_back(stoll(s));
  }

  sort(v.begin(), v.end());

  for (ll i : v) cout << i << '\n';
  return 0;
}