#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;  
    vector<pair<int,int>> v;
    for(int i = 0 ; i < n ; i++) {
        int s,e;
        cin >> s >> e;
        v.push_back({s,e});
    }
    
    sort(v.begin(), v.end());
    int ans = 0;
    int x = v[0].first;
    int nx = v[0].second;
    ans += abs(nx - x);
    for(int i = 1 ; i < n ; i++) {
        if(v[i].first <= nx && v[i].second > nx) {
            ans += abs(v[i].second - nx);
            nx = v[i].second;
        }
        
        if(v[i].first > nx && v[i].second > nx) {
            ans += abs(v[i].second - v[i].first);
            v[i].first = nx;
            nx = v[i].second;
        }
    }
    
    cout << ans;
}

