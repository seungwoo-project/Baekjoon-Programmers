#include <bits/stdc++.h>
using namespace std;
int s[100004];
int dp[100004];
int a,b;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,m;
  cin >> n >> m;
  for(int i = 1; i <= n ; i++) {
    cin >> s[i];
  }
  
  for(int i = 1 ; i <= n ; i++) {
    dp[i] = dp[i-1] + s[i];
  }
  
  for(int i = 0 ; i < m ; i++) {
    cin >> a >> b;
    cout << dp[b] - dp[a-1] << '\n';
  }
  return 0;
}

// 점화식 dp[k] = dp[k-1] + s[k];