#include <bits/stdc++.h>
using namespace std;

int dp[1000004], n;
int pre[1000004];


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  dp[0] = 0;
  dp[1] = 0;
  pre[1] = 0;
  for(int i = 2 ; i <= n ; i++) {
    dp[i] = dp[i-1] + 1; // 먼저 정의
    pre[i] = i-1; // 먼저 정의
    if(i % 3 == 0 && dp[i/3] + 1 < dp[i]) {
      pre[i] = i/3;
      dp[i] = dp[i/3] + 1;
    }
    
    if(i % 2 == 0 && dp[i/2] + 1 < dp[i]) {
      pre[i] = i/2;
      dp[i] = dp[i/2] + 1;
    }
  
   // 만약 if문 만족하는것이 없다면 먼저 정의한 값으로 갱신됨
  }  
  
  
  cout << dp[n] << '\n';
  int cur = n;
  while(1) {
    cout << cur << " ";
    if(cur == 1) break;
    cur = pre[cur];
  }
  
  return 0;
}

// dp[i] = i일 때 연산을 하는 최솟값