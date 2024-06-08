#include <bits/stdc++.h>
using namespace std;
int tc;
int dp[44][2];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> tc;
  dp[1][0] = 0;
  dp[1][1] = 1;
  dp[0][0] = 1;
  dp[0][1] = 0;
  for(int i = 2; i <= 40; i++) {
    dp[i][0] = dp[i-1][0] + dp[i-2][0];
    dp[i][1] = dp[i-1][1] + dp[i-2][1];
  }
  while(tc--) {
    int n;
    cin >> n;
    cout << dp[n][0] << " " << dp[n][1] << '\n';
  }
  return 0;
}

// dp[i][0] = i일때 0이 호출 되는 개수
// dp[i][1] = i일때 1이 호출 되는 개수
// 초기값 
// dp[1][0] = 0;
// dp[1][1] = 1;
// dp[0][0] = 1;
// dp[0][1] = 0;