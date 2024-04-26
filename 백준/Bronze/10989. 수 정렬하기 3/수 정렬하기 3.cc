#include <bits/stdc++.h>
using namespace std;
int n, a;
map<int,int> mp;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a;
        mp[a]++;
    }
    
    
    for(auto i : mp) {
        for(int j = 0 ; j < i.second ; j++) {
            cout << i.first << '\n';
        }
    }

    return 0;
}