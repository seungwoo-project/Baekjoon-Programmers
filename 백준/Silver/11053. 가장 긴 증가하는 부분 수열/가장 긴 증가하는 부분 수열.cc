#include <bits/stdc++.h>
using namespace std;
int s[1004], dp[1004];

int main() {
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
    cin >> s[i];
  }
  dp[0] = 0;
  dp[1] = 1;
  for(int i = 1 ; i <= n ; i++) {
    dp[i] = 1;
    for(int j = 1 ; j < i ; j++) {
      if(s[j] < s[i]) dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  
  cout << *max_element(&dp[1], &dp[n+1]);
  return 0;
}