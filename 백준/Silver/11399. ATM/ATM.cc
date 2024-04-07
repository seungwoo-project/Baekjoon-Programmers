#include<bits/stdc++.h>
using namespace std;
int a[1004];
int sum;
int t;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(&a[0], &a[0] + n);
    
    for(int i = 0 ; i < n ; i++) {
        t += a[i];
        sum += t;
    }
    
    cout << sum;
}
