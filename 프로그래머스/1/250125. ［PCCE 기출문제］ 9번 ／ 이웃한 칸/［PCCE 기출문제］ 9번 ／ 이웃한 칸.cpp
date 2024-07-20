#include <bits/stdc++.h>

using namespace std;
int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int solution(vector<vector<string>> board, int y, int x) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int cnt = 0;
    string eq = board[y][x];
    for(int i = 0 ; i < 4 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= board.size() || ny < 0 || ny >= board.size()) continue;
        if(board[ny][nx] == eq) cnt++;
    }
    
    return cnt;
}