#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> v;
void combi(int start) {
  if (v.size() == k) {
    for (int i : v) cout << i << " ";
    cout << '\n';
  }

  for (int i = start + 1; i < n; i++) {
    v.push_back(i + 1);
    combi(i);
    v.pop_back();
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;

  combi(-1);
}