#include <bits/stdc++.h>
using namespace std;
int n, dp[1004];
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  dp[1] = 1;
  dp[2] = 3;
  
  for(int i = 3 ; i <= n ; i++) {
    dp[i] = (dp[i-1] + dp[i-2] * 2) % 10007;
  }
  
  cout << dp[n] % 10007;
  return 0;
}

// 점화식
// dp[k] = 2*k 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수
// dp[k] = dp[k-1] + dp[k-2] * 2