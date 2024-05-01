#include <bits/stdc++.h>
using namespace std;
int n;
int a[2200][2200];
int ret[3];
void go(int y, int x, int n) {

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(a[y][x] != a[y+i][x+j]) {
                go(y,x,n/3);        
                go(y,x+n/3,n/3);        
                go(y,x+n/3+n/3,n/3);        
                go(y+n/3,x,n/3);        
                go(y+n/3,x+n/3,n/3);        
                go(y+n/3,x+n/3+n/3,n/3);        
                go(y+n/3+n/3,x,n/3);        
                go(y+n/3+n/3,x+n/3,n/3);        
                go(y+n/3+n/3,x+n/3+n/3,n/3);        
                return ;
            }
        }
    }
    if(a[y][x] == -1) {
        ret[0]++;
    } else if(a[y][x] == 0) {
        ret[1]++;
    } else {
        ret[2]++;
    }
    return ;

}
int main() {
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> a[i][j];
        }
    }

    go(0,0,n);
    cout << ret[0] << '\n' << ret[1] << '\n' << ret[2];

    return 0;
}