#include <bits/stdc++.h>
using namespace std;
int dp[1500004];
int t[54], p[1500004];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> t[i] >> p[i];
  }
  
  for(int i = n ; i >= 1 ; i--) {
    if(i + t[i] <= n + 1) {
      dp[i] = max(dp[i + t[i]] + p[i], dp[i+1]);
    } else {
      dp[i] = dp[i+1];
    }
  }
  
  cout << dp[1];
  return 0;
}