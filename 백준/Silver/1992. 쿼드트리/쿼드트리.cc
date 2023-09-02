#include <bits/stdc++.h>
using namespace std;
int n;
int a[68][68], visited[68][68];
const int dy[] = {-1,0,1,0} , dx[] = {0,1,0,-1};
int y,x;

void go(int sx, int sy, int ex, int ey) {
	for(int i = sx ; i < ex ; i++) {
		for(int j = sy ; j < ey ; j++) {
			if(a[sx][sy] != a[i][j]) {
				cout << "(";
				go(sx, sy, (sx+ex)/2, (sy+ey)/2);
				go(sx, (sy+ey)/2, (sx+ex)/2, ey);
				go((sx+ex)/2, sy, ex, (sy+ey)/2);
				go((sx+ex)/2, (sy+ey)/2, ex, ey);
				cout << ")";
				return ;
			}
		}
	}
	cout << a[sx][sy];
}
int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			scanf("%1d" , &a[i][j]);
		}
	}
	go(0, 0, n, n);
	
	
	
	return 0;
}
