#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        ll ans = 0;
        int mx = a[n-1];
        for(int i = n-1 ; i >= 0 ; i--) {
            if(a[i] < mx) {
                ans += mx - a[i];
            } else mx = a[i];
        }
        
        cout << ans << '\n';
    }
}
