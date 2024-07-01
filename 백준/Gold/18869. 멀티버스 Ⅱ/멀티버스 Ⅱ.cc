#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[104][10004];
vector<vector<int>> tmp, ret;
int cnt;
map<vector<int>, int> mp;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    
    for(int i = 0 ; i < n ; i++) {
        vector<int> v;
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
        tmp.push_back(v);
    }
    
    for(int i = 0 ; i < n ; i++) {
        sort(tmp[i].begin(), tmp[i].end());
        tmp[i].erase(unique(tmp[i].begin(), tmp[i].end()), tmp[i].end());
    }
    
    for(int i = 0 ; i < n ; i++) {
        vector<int> v;
        for(int j = 0 ; j < m ; j++) {
            int idx = lower_bound(tmp[i].begin(), tmp[i].end(), a[i][j]) - tmp[i].begin();
            v.push_back(idx);
        }
        ret.push_back(v);
    }
    
    // for(int i = 0 ; i < ret.size(); i++) {
    //     for(int j = 0 ; j < ret[i].size() ; j++) {
    //         cout << ret[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';
    
    for(int i = 0 ; i < ret.size() - 1; i++) {
        for(int j = i + 1 ; j < ret.size() ; j++) {
            if(ret[i] == ret[j]) cnt++;
        }
    }
    cout << cnt;
}