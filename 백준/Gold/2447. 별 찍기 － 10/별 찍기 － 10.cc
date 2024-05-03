#include <bits/stdc++.h>
using namespace std;
int n;

void go(int i, int j, int n) {
    
    if(n == 1) {
        cout << "*";
    } else if((i/(n/3))%3 == 1 && (j/(n/3))%3 == 1) {
        cout << " ";
    } else {
        go(i,j,n/3);
    }
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            go(i,j,n);
        }
        cout << '\n';
    }
}