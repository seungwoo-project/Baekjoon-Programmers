#include <bits/stdc++.h> 
using namespace std;

int n,m;
map<int,int> mp;
int a,b;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> b;
        mp[b]++;
    }
    
    cin >> m;
    for(int i = 0 ; i < m ; i++) {
        cin >> a;
        if(mp[a]) {
            cout << mp[a] << " ";
        } else {
            cout << 0 << " ";
        }
    }
    return 0;
}