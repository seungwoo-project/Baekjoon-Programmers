#include <bits/stdc++.h>
using namespace std;
int s[100004];
int dp[100004];
int main() {
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> s[i];
  }
  
  for(int i = 1 ; i <= n ; i++) {
    dp[i] = max(dp[i-1] + s[i], s[i]);
    
  }
  
  cout << *max_element(&dp[1], &dp[n+1]);
  return 0;
}