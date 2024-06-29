#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
vector<ll> a;
ll ret;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    
    for(int i = 0 ; i < m ; i++) {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    
    ll left = 1;
    ll right = *max_element(a.begin(), a.end());
    
    while(left <= right) {
        ll mid = (left + right) / 2;
        ll cnt = 0;
        for(int i = 0 ; i < m ; i++) {
            cnt += a[i] / mid; // cnt가 많으면 길이가 짧다는 것이고 cnt가 인원수에 맞으면 제일 긴 막대
        }
        
        if(cnt < n) { // 길이가 김
            right = mid - 1;
        }
        
        if(cnt >= n) {
            left = mid + 1;
            
            ret = max(ret, mid);
        }
    }
    
    cout << ret;
}