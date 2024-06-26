#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
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
    for(int i = 0 ; i < b.size() ; i++) {
        cout << lower_bound(a.begin(), a.end(), b[i]) - a.begin() << " "; 
    }
    
}
// -10 -9 2 4 4
// 999 999 999 1000 1000 1000