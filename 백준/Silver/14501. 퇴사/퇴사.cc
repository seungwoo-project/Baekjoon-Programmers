#include <bits/stdc++.h>
using namespace std;
int dp[20];
int t[10], s[20];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> t[i] >> s[i];
  }
  
  for(int i = 1 ; i <= n ; i++) {
    if(i + t[i] > n + 1) continue;
    dp[i] = s[i];
    for(int j = 1 ; j < i ; j++) {
      if(j + t[j] <= i) dp[i] = max(dp[i], dp[j] + s[i]);
    }
  }
  
  cout << *max_element(&dp[1], &dp[n+1]);
  return 0;
}