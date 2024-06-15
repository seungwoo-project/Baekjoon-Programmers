#include <bits/stdc++.h>
using namespace std;
int s[24];
int dp[10004];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int tc;
  cin >> tc;
  while(tc--) {
    int n;
    cin >> n;
    fill(&s[0], &s[n], 0);
    for(int i = 1 ; i <= n ; i++) {
      cin >> s[i];
    }
    
    int m;
    cin >> m;
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i++) {
      for(int j = s[i] ; j <= m ; j++) {
        dp[j] = dp[j] + dp[j-s[i]];
      }
    }
    
    cout << dp[m] << '\n';
  }
}
