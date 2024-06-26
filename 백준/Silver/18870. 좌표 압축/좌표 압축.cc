#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
map <int,int> mp;
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int k;
        cin >> k;
        a.push_back(k);
    }
    b = a;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for(int i = 0 ; i < a.size() ; i++) {
        mp[a[i]] = lower_bound(a.begin(), a.end(), a[i]) - a.begin();
    }
    
    for(int i = 0 ; i < b.size(); i++) {
        cout << mp[b[i]] << " ";
    }
}
// -10 -9 2 4 4
// 999 999 999 1000 1000 1000