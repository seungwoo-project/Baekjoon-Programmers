#include<bits/stdc++.h>
using namespace std;
int visited[200004];
int n,k,x;
int main() {
    cin >> n >> k;
    
    queue<int> q;
    visited[n] = 1;
    q.push(n);
    
    while(q.size()) {
        x = q.front(); q.pop();
        if(visited[k]) break;
        int tp = 2 * x; // 순간이동
        if(tp >= 0 && tp <= 200000) {
            if(visited[tp] == 0) {
                visited[tp] = visited[x];
                q.push(tp);
            }
        }
        
        for(int nx : {x-1, x+1}) {
            if(nx < 0 || nx > 200000) continue;
            if(visited[nx]) continue;
            visited[nx] = visited[x] + 1;
            q.push(nx);
        }
    }
    
    cout << visited[k] - 1;
}