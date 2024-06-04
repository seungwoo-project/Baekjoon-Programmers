#include <bits/stdc++.h>
using namespace std;
int n;
int score[304];
int dp[304][3];
int ret;
int main() {
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> score[i];
  }
  
  dp[1][1] = score[1];
  dp[1][2] = 0;
  dp[2][1] = score[2];
  dp[2][2] = score[1] + score[2];
  
  if(n == 1) {
    cout << score[1] << '\n';
    return 0;
  }
  
  for(int i = 3 ; i <= n ; i++) {
    dp[i][1] = max(dp[i-2][1], dp[i-2][2]) + score[i];
    dp[i][2] = dp[i-1][1] + score[i];
  }
  
  cout << max(dp[n][1], dp[n][2]);
  return 0;
}


