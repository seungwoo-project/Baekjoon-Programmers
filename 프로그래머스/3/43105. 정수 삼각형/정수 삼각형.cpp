#include<bits/stdc++.h>
using namespace std;
int dp[504][504];
int solution(vector<vector<int>> a) {
    int answer = 0;
    dp[1][1] = a[0][0];
    for(int i = 2 ; i <= a.size(); i++) {
        for(int j = 1 ; j <= a[i-1].size() ; j++) {
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i-1][j-1];
        }
    }
    
    answer = *max_element(&dp[a.size()][1], &dp[a.size()][a.size()+1]);
    return answer;
}

// 7
// 3 8
// 8 1 0
// 2 7 4 4
// 4 5 2 6 5