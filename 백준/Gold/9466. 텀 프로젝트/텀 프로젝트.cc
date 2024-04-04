#include <bits/stdc++.h>
using namespace std;
int t;
int a[100004];
int visited[100004];
int done[100004];
int cnt;
void go(int n) {
    visited[n] = 1;
    int there = a[n];
    if(visited[there] == 0) {
        go(there);
    }
    
    if(done[there] == 0) {
        
        for(int i = there; i != n; i = a[i]) {
            cnt++;
        }
        cnt++;
    }
    done[n] = 1;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t--) {
        memset(visited,0,sizeof(visited));
        memset(done,0,sizeof(done));
        cnt = 0;
        int n;
        cin >> n;
        for(int i = 1 ; i <= n ; i++) {
            cin >> a[i];
        }
        
        for(int i = 1 ; i <= n ; i++) {
            if(visited[i] == 0) go(i);
        }

        cout << n-cnt << '\n';
        
    }
}