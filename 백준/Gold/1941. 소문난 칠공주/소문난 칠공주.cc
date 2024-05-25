#include <bits/stdc++.h>
using namespace std;

bool combi[25];
string a[5];
int ret;
const int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 5; i++) cin >> a[i];

  // 25명중 칠공주가 될 사람의 후보 조합을 뽑습니다.
  // next_permutation으로 25명중 7명을 뽑는다.
  fill(combi + 7, combi + 25, true);
  do {
    queue<pair<int, int>> q;
    // 구성원 중 이다솜파의 수, 가로세로로 인접한 사람의 수
    int dasom = 0, adj = 0;
    int isp7[5][5] = {}, vis[5][5] = {};
    for (int i = 0; i < 25; i++) {
      if (!combi[i]) {
        int y = i / 5, x = i % 5;
        isp7[y][x] = 1;
        if (q.empty()) {
          q.push({y, x});
          vis[y][x] = 1;
        }
      }
    }

    while (q.size()) {
      int x, y;
      tie(y, x) = q.front();
      q.pop();
      adj++;
      if (a[y][x] == 'S') dasom++;
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || vis[ny][nx] ||
            !isp7[ny][nx])
          continue;
        q.push({ny, nx});
        vis[ny][nx] = 1;
      }
    }
    ret += (adj >= 7 && dasom >= 4);

  } while (
      next_permutation(combi, combi + 25));  // combi 배열 값을 순열처럼 돌림.
  cout << ret;
}
/*
25명 중 칠공주가 배치될 수 있는 모든 조합을 시도합니다.
경우의 수가 많아보이지만, 25C7 = 480700이므로
충분히 2초안에 수행될 수 있습니다.
서로 가로세로로 인접해야 한다는 2번 조건은 여러가지 방법으로
확인할 수 있으나, 본 풀이에서는 BFS를 이용하였습니다.
*/