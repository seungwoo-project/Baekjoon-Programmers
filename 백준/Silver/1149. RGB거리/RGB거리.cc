#include <bits/stdc++.h>
using namespace std;
int r[1004], g[1004], b[1004], dp[1004][4];
int main() {
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> r[i] >> g[i] >> b[i];
  }
  
  dp[1][0] = r[1];
  dp[1][1] = g[1];
  dp[1][2] = b[1];
  
  for(int k = 1 ; k <= n ; k++) {
    dp[k][0] = min(dp[k-1][1], dp[k-1][2]) + r[k];
    dp[k][1] = min(dp[k-1][0], dp[k-1][2]) + g[k];
    dp[k][2] = min(dp[k-1][1], dp[k-1][0]) + b[k];
  }
  
  cout << min({dp[n][0], dp[n][1], dp[n][2]});
  
  return 0;
}

