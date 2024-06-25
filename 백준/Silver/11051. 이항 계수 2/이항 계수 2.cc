#include <bits/stdc++.h>
using namespace std;
int dp[1004][1004];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n, k;
    for(int i = 1 ; i <= 1000 ; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for(int j = 1 ; j < i ; j++) {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
        }
    }
    
    cin >> n >> k;
    cout << dp[n][k];
}

// dp[i][j] = dp[i-1][j-1] + dp[i-1][j];