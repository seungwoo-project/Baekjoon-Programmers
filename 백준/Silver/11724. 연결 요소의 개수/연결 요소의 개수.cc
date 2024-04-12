#include <bits/stdc++.h>
using namespace std;

int n,m,a,b,cnt;
vector<int> adj[1004];
int visited[1004];
void go(int n) {
    visited[n] = 1;
    for(int there : adj[n]) {
        if(visited[there]) continue;
        visited[there] = 1;
        go(there);
    }
}
int main() 
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i = 1 ; i <= n ; i++) {
        if(visited[i]) continue;
        go(i);
        cnt++;
    }
    
    cout << cnt;
    return 0;
}