#include <bits/stdc++.h>
using namespace std;
int s[1004], dp[1004];
int main() {
  int n;
  cin >> n;
  
  for(int i = 1 ; i <= n ; i++) {
    cin >> s[i];
  }
  
  for(int i = 1 ; i <= n ; i++) {
    dp[i] = s[i];
    for(int j = 1 ; j < i ; j++) {
      if(s[j] < s[i]) dp[i] = max(dp[i], dp[j] + s[i]); 
    }
  }
  
  cout << *max_element(&dp[1], &dp[n+1]);
  return 0;
}

// 1 101 3 53 113 6 11 17 24 32