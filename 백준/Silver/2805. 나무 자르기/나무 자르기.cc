#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
vector<ll> v;
ll ret;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        ll k;
        cin >> k;
        v.push_back(k);
    }
    
    ll left = 1;
    ll right = *max_element(v.begin(), v.end());
    
    while(left <= right) {
        ll mid = (left + right) / 2;
        
        ll cnt = 0;
        for(int i = 0 ; i < n ; i++) {
            if(v[i] - mid > 0) cnt += v[i] - mid;
        }
        
        if(cnt >= m) { // 가져가야할 나무 m보다 길이가 큰 걸 가져가면 안됨
            left = mid + 1;
            
            ret = max(ret, mid);
        }
        
        if(cnt < m) {
            right = mid - 1;
        }
    }
    
    cout << ret;
}

// mid가 10일 때 22