#include <bits/stdc++.h>
using namespace std;
int a[3];
int visited[64][64][64];
int n;
int atk[6][3] = {
	{9,1,3},
	{9,3,1},
	{3,1,9},
	{3,9,1},
	{1,3,9},
	{1,9,3}
};
struct A {
	int x;
	int y;
	int z;
};
queue<A> q;
int solve(int x, int y , int z) {
	visited[x][y][z] = 1;
	q.push({x,y,z});
	while(q.size()) {
		int x = q.front().x;
		int y = q.front().y;
		int z = q.front().z;
		q.pop();
		if(visited[0][0][0]) break;
		for(int i = 0 ; i < 6 ; i++) {
			int nx = max(0,x-atk[i][0]);
			int ny = max(0,y-atk[i][1]);
			int nz = max(0,z-atk[i][2]);
			if(visited[nx][ny][nz]) continue;
			visited[nx][ny][nz] = visited[x][y][z] + 1;
			q.push({nx,ny,nz});
		}
	}
	return visited[0][0][0] - 1;
}
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	cout << solve(a[0],a[1],a[2]);
	
	return 0;
}