#include <bits/stdc++.h>
using namespace std;
int sum;
int a[54], b[54];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
      cin >> a[i];
  }
  
  for(int i = 0 ; i < n ; i++) {
      cin >> b[i];
  }
  
  sort(a, a+n);
  sort(b, b+n, greater<int>());
  
  for(int i = 0 ; i < n ; i++) {
      sum += a[i] * b[i];
  }
  cout << sum;
}