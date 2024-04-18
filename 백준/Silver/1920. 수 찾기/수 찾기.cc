#include <bits/stdc++.h>
using namespace std;
int n,m,a,b;
map<int,int> mp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a;
        mp[a]++;
    }
    
    cin >> m;
    for(int i = 0 ; i < m ; i++) {
        cin >> b;
        if(mp[b] > 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}


// 시간초과방지로 map을 썼음.