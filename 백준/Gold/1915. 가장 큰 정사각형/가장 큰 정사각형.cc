#include <bits/stdc++.h>
using namespace std;
int a[1004][1004];
int dp[1004][1004];
int ans;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n,m;
  cin >> n >> m;
  for(int i = 1 ; i <= n ; i++) {
    string s;
    cin >> s;
    
    for(int j = 1 ; j <= m ; j++) {
      a[i][j] = s[j-1] - '0';
    }
  }
  
  for(int i = 1 ;  i <= n ; i++) {
    for(int j = 1 ; j <= m ; j ++) {
      if(a[i][j]) {
        dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
      }
      ans = max(ans, dp[i][j]);
    }
  }
  cout << ans*ans;
}

