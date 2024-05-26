#include <bits/stdc++.h>
using namespace std;
int n;
unsigned long long int ret;
char a;
unsigned long long int r = 1;
long long int m = 1234567891;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    ret += (((a - 96) % m) * (r)) % m;
    r *= 31;
    r %= m;
  }

  cout << ret % m;
  return 0;
}
