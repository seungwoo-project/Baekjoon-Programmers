#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v;
    ll num;
    for(int i = 0 ; i < n ; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    ll min_left;
    ll min_right;
    ll min_mid;
    ll ans = 3000000004;
    for(int i = 0 ; i < v.size(); i++) {
        for(int j = i + 1 ; j < v.size(); j++) {
            ll tmp = - v[i] - v[j];
            ll idx = lower_bound(v.begin(), v.end(), tmp) - v.begin();
            
            for(int k = -2 ; k <= 2 ; k++) {
                if(idx + k == i || idx + k == j) continue;
                if(idx + k < 0 || idx + k >= n) continue;
                
                if(ans > abs(v[i] + v[j] + v[idx + k])) {
                    min_left = i;
                    min_right = j;
                    min_mid = idx + k;
                    ans = abs(v[i] + v[j] + v[idx + k]);
                }
            }           
        }
    }
    vector<ll> ret;
    ret.push_back(v[min_left]);
    ret.push_back(v[min_mid]);
    ret.push_back(v[min_right]);
    
    sort(ret.begin(), ret.end());
    
    
    for(ll i : ret) {
        cout << i << " ";
    }
}
