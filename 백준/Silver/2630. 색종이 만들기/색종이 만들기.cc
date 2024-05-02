#include <bits/stdc++.h>
using namespace std;

int n;
int a[130][130];
int cnt[2];
bool check(int y,int x,int n) {

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(a[y][x] != a[y+i][x+j]) {
                return 0;
            }
        }
    }

    return 1;
}
void go(int y,int x, int n) {
    // 만약 같은 색상의 색종이가 아니라면 4등분

    if(check(y,x,n)) {
        cnt[a[y][x]]++;
        return ;
    } else {
        // 4등분
        go(y,x,n/2);
        go(y,x+n/2,n/2);
        go(y+n/2,x,n/2);
        go(y+n/2,x+n/2,n/2);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> a[i][j];
        }
    }

    go(0,0,n);

    for(int ret : cnt) {
        cout << ret << '\n';
    }
}