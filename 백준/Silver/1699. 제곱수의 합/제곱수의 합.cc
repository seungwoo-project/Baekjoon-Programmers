#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  int dp[n] = {0,};
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 3;
  for(int i = 4 ; i <= n ; i++) {
    dp[i] = i;
    for(int j = 1 ; j * j <= i ; j++) {
      dp[i] = min(dp[i], dp[i/(j*j)] + dp[i%(j*j)]);
    }
  }
  
  cout << dp[n];
}