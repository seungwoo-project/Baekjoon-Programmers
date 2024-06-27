#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ret;
ll a[10004];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    ll k,n;
    cin >> k >> n;
    
    for(int i = 0 ; i < k ; i++) {
        cin >> a[i];
    }
    ll st = 0;
    ll en = *max_element(a, a+k);
    while(st <= en) {
        ll mid = (st + en + 1) / 2;
        ll cnt = 0;
        for(int i = 0 ; i < k ; i++) {
            cnt += a[i] / mid; 
        }
        
        if(cnt < n) {
            // 랜선의 길이가 커서 11개 보다 작게 나온다면 랜선의 길이를 줄여야함
            en = mid - 1;
        } else if(cnt >= n) {
            // 랜선의 길이가 작아서 11개 보다 개수가 크게 나온다면 랜선의 길이를 키워야함
            st = mid + 1;
            
            ret = max(ret, mid);
        }
        
        
    }
    
    cout << ret;
}