#include <bits/stdc++.h>
using namespace std;
unordered_map<string, string> mp;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for(int i = 0 ; i < m ; i++) {
        string k;
        cin >> k;
        cout << mp[k] << '\n';
    }
}