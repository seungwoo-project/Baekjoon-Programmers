#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int c;
    for(int i = 0 ; i < n ; i++) {
        cin >> c;
        if(c <= 0) {
            a.push_back(c);
        } else {
            b.push_back(c);
        }
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int ans = 0;
    
    if((int)a.size() % 2 == 1) ans += a[(int)a.size() - 1]; // -5 -4 -3 -2 -1 0
    for(int i = 0 ; i < (int)a.size() - 1 ; i+=2) { 
        ans += a[i] * a[i+1];
    }
    
    if((int)b.size() % 2 == 1) ans += b[b.size() -1]; // 5 4 3 2 1
    for(int i = 0 ; i < (int)b.size() - 1 ; i+=2) {
        if(b[i+1] == 1) {
            ans += b[i] + b[i+1];
        } else {
            ans += b[i] * b[i+1];
        }
    }
    cout << ans;
}

