#include <bits/stdc++.h>
using namespace std;
const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};
int x,y,r,c, water_visited[1504][1504], back_visited[1504][1504], day, backX,backY;
char a[1504][1504];
queue<pair<int,int>> water, back, watertemp, backtemp;
void qclear(queue<pair<int,int>> &q) {
	queue<pair<int,int>> empty;
	swap(q,empty);
}
bool move_back() {
	while(back.size()) {
		tie(y,x) = back.front();
		back.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c || back_visited[ny][nx]) continue;
			if(a[ny][nx] == 'L') return true;
			if(a[ny][nx] == 'X') {
				back_visited[ny][nx] = 1;
				backtemp.push({ny,nx});
			} 	
			if(a[ny][nx] == '.') {
				back_visited[ny][nx] = 1;
				back.push({ny,nx}); 
			}
		}
	}
	return false;
}

void water_melting() {
	while(water.size()) {
		tie(y,x) = water.front();
		water.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c || water_visited[ny][nx]) continue;
			if(a[ny][nx] == 'X') {
				water_visited[ny][nx] = 1;
				watertemp.push({ny,nx});
				a[ny][nx] = '.';
			} 	
		}
	}
}
int main() {
	cin >> r >> c;
	for(int i = 0 ; i < r ; i++) {
		for(int j = 0 ; j < c ; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'L') {
				backX = j;
				backY = i;
			}
			if(a[i][j] == '.' || a[i][j] == 'L') {
				water_visited[i][j] = 1;
				water.push({i,j});
			}
		}	
	}
	
	back_visited[backY][backX] = 1;
	back.push({backY,backX});
	while(1) {
		if(move_back()) break;
		water_melting();
		back = backtemp;
		water = watertemp;
		qclear(backtemp);
		qclear(watertemp);
		day++;
	}
	cout << day;
	return 0;
}