#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[4004], b[4004], c[4004], d[4004];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    vector<ll> two1, two2;
    ll cnt = 0;
    // 4000 * 4000
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            two1.push_back(a[i] + b[j]);
            two2.push_back(c[i] + d[j]);
        }
    }
    
    sort(two1.begin(), two1.end());
    sort(two2.begin(), two2.end());
    
    for(int i = 0 ; i < two1.size(); i++) {
        ll num = two1[i];
        ll left, right;
        if(num <= 0) {
            left = lower_bound(two2.begin(), two2.end(), abs(num)) - two2.begin();
            right = upper_bound(two2.begin(), two2.end(), abs(num)) - two2.begin();
        } else {
            left = lower_bound(two2.begin(), two2.end(), -num) - two2.begin();
            right = upper_bound(two2.begin(), two2.end(), -num) - two2.begin();
        }
        
        cnt += right - left;
    }
    
    cout << cnt;
    
}

// 완탐은 4000개 중에 1개를 4번 더 해야하므로 4000 * 4000 * 4000 * 4000 (시간초과)
