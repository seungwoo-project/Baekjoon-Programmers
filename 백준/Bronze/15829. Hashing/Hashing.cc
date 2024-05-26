#include <bits/stdc++.h>
using namespace std;
int n;
long long int ret;
char a;
int r = 31;
long long int m = 1234567891;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    ret += (a - 96) * (int)pow(r, i) % m;
  }

  cout << ret;
  return 0;
}
