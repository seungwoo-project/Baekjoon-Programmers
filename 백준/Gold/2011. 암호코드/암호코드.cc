#include <bits/stdc++.h>
using namespace std;
int dp[5004];
int a[5004];
string n;
int mod = 1000000;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  dp[0] = 1;
  for(int i = 1 ; i <= n.size(); i++) {
      a[i] = n[i-1] - '0';
  }
  for(int i = 1; i <= n.size(); i++) {
      // 2자리가 안만들어 지는 경우
      if(a[i] > 0) {
          dp[i] = (dp[i] + dp[i-1]) % mod; 
      } 
      
      int x = a[i-1] * 10 + a[i];
      if(x <= 26 && x >= 10) {
          dp[i] = (dp[i] + dp[i-2]) % mod;
      }
  }
  
  cout << dp[n.size()] % mod;
}
// dp[i] = i의 수일 때 만들어 질 수 있는 최대개수