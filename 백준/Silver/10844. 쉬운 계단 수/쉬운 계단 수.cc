#include <bits/stdc++.h>
using namespace std;
long long dp[104][11];
int mod = 1000000000;
long long ret;
int main() {
  int n;
  cin >> n;
  for(int i = 1 ; i<= 9 ; i++) {
    dp[1][i] = 1;
  }
  for(int i = 2 ; i <= n ; i++) {
    for(int j = 0; j <= 9 ; j++) {
      if(j == 0) {
        dp[i][j] = dp[i-1][j+1];
      } else if(j == 9) {
        dp[i][j] = dp[i-1][j-1];
      } else {
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]);
      }
      dp[i][j] %= mod;
    } 
  }
  
  for(int i = 0 ; i <= 9 ; i++) {
    ret = ret + dp[n][i];
  }
  
  cout << ret % mod;
  return 0;
}

//dp[i][j] = i길이 일 때의 최대 값 , 단 j는 마지막 끝의 자리의 숫자이다.
