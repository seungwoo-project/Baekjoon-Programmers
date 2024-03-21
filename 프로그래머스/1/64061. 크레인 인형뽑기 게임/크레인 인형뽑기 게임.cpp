#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int solution(vector<vector<int>> board, vector<int> moves) {

//  b[0]   0 0 0 0 0
//  b[1]   0 0 1 0 3
//  b[2]   0 2 5 0 1
//  b[3]   4 2 4 4 2
//  b[4]   3 5 1 3 1
    // 4 3 1 1 3 2 4
    int answer = 0;
    
    for(int m : moves) {
        for(int i = 0 ; i < board[0].size() ; i++) {
            if(board[i][m - 1] != 0) {
                if(!stk.empty() && stk.top() == board[i][m - 1]) {
                    stk.pop();                
                    answer++;
                    board[i][m - 1] = 0;
                    break;
                } else {
                    stk.push(board[i][m - 1]);
                    board[i][m - 1] = 0;
                    break;
                }
            }
        }
    }
    return answer * 2;
}