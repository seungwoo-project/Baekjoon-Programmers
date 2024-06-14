#include <bits/stdc++.h>
using namespace std;
long long dp[104];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int tc;
  cin >> tc;
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 1;
  dp[4] = 2;
  dp[5] = 2;
  while(tc--) {
    int n;
    cin >> n;
    if(n > 5) {
      fill(&dp[6], &dp[n+1], 0);
      for(int i = 6 ; i <= n ; i++) {
        dp[i] = dp[i-5] + dp[i-1];
      }
    }
    
    cout << dp[n] << '\n';
  }
}