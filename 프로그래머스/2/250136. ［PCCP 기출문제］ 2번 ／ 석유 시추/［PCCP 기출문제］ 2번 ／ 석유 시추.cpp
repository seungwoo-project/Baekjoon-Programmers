#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
int visited[504][504];
int depth = 1;
int y, x, n, m;
map<int, int> cnt;
vector<vector<int>> maps;

void bfs(int cy, int cx) {
    // 석유가 있는 땅 로직
    queue<pair<int,int>> q;
    int tmp = 1;
    maps[cy][cx] = depth;
    visited[cy][cx] = 1; // 방문처리
    q.push({cy, cx});
    while(q.size()) {
        tie(y,x) = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(visited[ny][nx] || maps[ny][nx] == 0) continue; 
            tmp++;
            q.push({ny, nx});
            maps[ny][nx] = depth;
            visited[ny][nx] = 1; // 빈 땅으로 바꿔줌
        }
    }
    
    cnt[depth++] = tmp;
}

int solution(vector<vector<int>> board) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int answer = 0;
    n = board.size(); // 5
    m = board[0].size(); // 8
    maps = board;
    
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(visited[j][i] || !maps[j][i]) continue; // 방문했거나 빈 땅이면 넘어감 
            bfs(j, i);
        }
    }
    
    for(int i = 0 ; i < m ; i++) {
        set<int> s;
        int temp = 0;
        for(int j = 0 ; j < n ; j++) {
            s.insert(maps[j][i]);
            
        }
        for(auto k : s) {
            temp += cnt[k];
        }
        answer = max(answer, temp);
    }
    return answer;
}
