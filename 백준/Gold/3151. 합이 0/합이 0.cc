#include <bits/stdc++.h>
using namespace std;
long long cnt;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int a[n] = {0,};
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(&a[0], &a[n]);
    
    for(int i = 0 ; i < n - 2 ; i++) {
        for(int j = i + 1 ; j < n - 1 ; j++) {
            int two = a[i] + a[j]; // 2개 더함
            int target = 0 - two;
            // 나머지 1개는 j+1부터 찾기
            if(binary_search(a, a+n, target)) {
                cnt += (upper_bound(a + j + 1,a+n,target) - a) - (lower_bound(a + j + 1, a+n, target) - a);
            }
            
        }
    }
    
    cout << cnt;
}