#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ret;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin >> n >> m;
    int a[n] = {0,};
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(a, a+n);
    
    int left = 1;
    int right = a[n-1] - a[0];
    while(left <= right) {
        int mid = (left + right) / 2;
        int cnt = 1;
        int prev = a[0];
        for(int i = 1 ; i < n ; i++) {
            if(a[i] - prev >= mid) {
                cnt++;
                prev = a[i];
            }
        }
        
        if(cnt < m) {
            right = mid - 1;
        } else {
            left = mid + 1;
            ret = max(ret, mid);
        }        
    }
    
    cout << ret;
}

// 1 2 4 8 9
