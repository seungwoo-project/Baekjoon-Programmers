#include <bits/stdc++.h>
using namespace std;
int a[2004], dp[2004][2004];
int n,m;
int s,e;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for(int i = 1 ; i <= n ; i++) {
      cin >> a[i];
      dp[i][i] = 1;
  }
  
  for(int i = 1 ; i <= n - 1 ; i++) {
      if(a[i] == a[i+1]) {
          dp[i][i+1] = 1;
      }
  }
  
  for(int i = 2 ; i <= n ; i++) {
      for(int j = 1 ; j < i ; j++) {
          
          if(a[i] == a[j] && dp[j + 1][i - 1]) {
              dp[j][i] = 1;
          }
      }
  }
  cin >> m; 
  for(int i = 0 ; i < m ; i++) {
      cin >> s >> e;
      cout << dp[s][e] << '\n';
  }
}
