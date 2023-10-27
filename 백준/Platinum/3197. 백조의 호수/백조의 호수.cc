#include <bits/stdc++.h>
using namespace std;
char a[1504][1504];
queue<pair<int,int>> water, watertemp, swan, swantemp;
int cnt, swany, swanx, x, y, r, c;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int visited[1504][1504] , visited_swan[1504][1504];
bool swan_move() {
	while(swan.size()) {
		tie(y,x) = swan.front();
		swan.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c || visited_swan[ny][nx]) continue;
			visited_swan[ny][nx] = 1;
			if(a[ny][nx] == 'X') swantemp.push({ny,nx});
			else if (a[ny][nx] == '.') swan.push({ny,nx});
			else if(a[ny][nx] == 'L') return true;
		}
	}
	return false;
}

void water_move() {
	while(water.size()) {
		tie(y,x) = water.front();
		water.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >=c || visited[ny][nx]) continue;
			if(a[ny][nx] == 'X') {
				visited[ny][nx] = 1;
				a[ny][nx] = '.';
				watertemp.push({ny,nx});
			}
		}
	}
}

void qclear(queue<pair<int,int>> &q) {
	queue<pair<int,int>> empty;
	swap(q,empty);
}
int main() {
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'L') {
				swany = i;
				swanx = j;
			}
			if(a[i][j] == '.' || a[i][j] == 'L') {
				visited[i][j] = 1;
				water.push({i,j});
			}
		}
	}
	
	swan.push({swany, swanx});
	visited_swan[swany][swanx] = 1;
	while(1) {
		if(swan_move()) break;
		water_move();
		water = watertemp;
		swan = swantemp;
		qclear(watertemp);
		qclear(swantemp);
		cnt++;
	}
	cout << cnt;
	return 0;
}