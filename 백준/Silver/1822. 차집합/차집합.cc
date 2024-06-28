#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a, b, ret;
int cnt;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        int k;
        cin >> k;
        a.push_back(k);
    }
    
    for(int i = 0 ; i < m ; i++) {
        int k;
        cin >> k;
        b.push_back(k);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0 ; i < (int)a.size() ; i++) {
        if(!binary_search(b.begin(), b.end(), a[i])) {
            cnt++;
            ret.push_back(a[i]);
        }
    }
    
    cout << cnt << '\n';
    for(int i : ret) cout << i << " ";
}