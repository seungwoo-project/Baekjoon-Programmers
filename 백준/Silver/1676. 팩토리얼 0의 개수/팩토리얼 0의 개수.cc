#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
int main() {
  cin >> n;
  while (n != 0) {
    n = n / 5;
    cnt += n;
  }

  cout << cnt;
}