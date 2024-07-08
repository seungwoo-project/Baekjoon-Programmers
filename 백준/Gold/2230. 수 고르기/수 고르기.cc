#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll ret = 4000000004;
    ll n, m;
    cin >> n >> m;
    ll a[n] = {0,};
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(a, a+n);
    
    for(int i = 0 ; i < n ; i++) {
        ll target = a[i] + m;
        ll idx = lower_bound(a, a+n, target) - a;
        if(idx != n) {
            ret = min(ret, a[idx] - a[i]);
        }
    }
    
    cout << ret;
}

// 1 3 5