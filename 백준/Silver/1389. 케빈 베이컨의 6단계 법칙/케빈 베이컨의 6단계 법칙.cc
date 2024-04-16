/******************************************************************************

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int mn = 987654321;
int n,m,a,b,ret,visited[104];
vector<int> adj[104];
map<int,int> mp;
int go(int x) {
    vector<int> v;
    queue<int> q;
    visited[x] = 1;
    q.push(x);
    while(q.size()) {
        int n = q.front(); q.pop();
        for(int nx : adj[n]) {
            if(visited[nx]) continue;
            visited[nx] = visited[n] + 1;
            v.push_back(visited[nx]-1);
            q.push(nx);
        }
    }
    
    int sum = accumulate(v.begin(), v.end(), 0);
    return sum;
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
        ret = go(i);
        mp[i] = ret;
        memset(visited,0,sizeof(visited));
        mn = min(mn, ret);
    }
    
    for(int i = 1 ; i <= n ; i++) {
        if(mp[i] == mn) {
            cout << i;
            return 0;
        }
    }
    return 0;
}