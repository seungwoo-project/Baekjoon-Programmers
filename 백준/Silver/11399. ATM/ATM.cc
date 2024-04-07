#include<bits/stdc++.h>
using namespace std;
int a[1004];
int sum;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(&a[0], &a[0] + n);
    
    for(int i = 0 ; i < n ; i++) {
            int cnt = 0;
        for(int j = 0 ; j <= i ; j++) {
            cnt += a[j];
        }
        sum += cnt;
    }
    
    cout << sum;
}
