#include <bits/stdc++.h>
using namespace std;
int mx = 0;
int a[100004];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
      cin >> a[i];
  }
  
  sort(a, a+n, greater<int>());
  for(int i = 0 ; i < n ; i++) {
      mx = max(mx, a[i] * (i+1));
  }
  
  cout << mx;
}