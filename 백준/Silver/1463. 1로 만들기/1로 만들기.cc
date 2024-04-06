#include <bits/stdc++.h>
using namespace std;
int visited[10000004];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a;
    int cnt = 0;
    cin >> a;
    visited[a] = 1;
    queue<int> q;
    q.push(a);
    
    while(q.size()) {
        int n = q.front(); q.pop();
        if(n == 1) {
            cout << visited[n] - 1 << '\n';
            return 0;
        }
        if(n % 3 == 0) {
            if(visited[n/3]) {
                if(visited[n/3] > visited[n] + 1) {
                    visited[n/3] = visited[n] + 1;
                }
            } else {
                visited[n/3] = visited[n] + 1;
                q.push(n/3);
            }
            
        } 
        
        if(n % 2 == 0) {
            if(visited[n/2]) {
                if(visited[n/2] > visited[n] + 1) {
                    visited[n/2] = visited[n] + 1;
                }
            } else {
                visited[n/2] = visited[n] + 1;
                q.push(n/2);
            }
        }
        
        if(visited[n-1]) {
            if(visited[n-1] > visited[n] + 1) {
                    visited[n-1] = visited[n] + 1;
                }
        } else {
            visited[n-1] = visited[n] + 1;
            q.push(n-1);
            
        }
    }
}