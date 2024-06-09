#include <bits/stdc++.h>
using namespace std;
int n, s[504][504], dp[504][504];
int main() {
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    for(int j = 1 ; j <= i ; j++) {
      cin >> s[i][j]; // i는 층 j는 몇번째의 수
    }
  }
  
  for(int i = 1 ; i <= n ; i++) {
    for(int j = 1 ; j <= i ; j++) {
      dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + s[i][j];
    }
  }

  int ret = *max_element(&dp[n][1], &dp[n][n+1]);
  cout << ret;
  return 0;
}

// dp[i] = i번째일때 가장 큰 수
// dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + s[i][j];