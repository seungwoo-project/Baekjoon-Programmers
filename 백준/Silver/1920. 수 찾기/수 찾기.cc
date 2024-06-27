#include <bits/stdc++.h>
using namespace std;
int n;
int a[100004];
int binary_f(int target) {
    int st = 0;
    int en = n - 1;
    
    while(st <= en) {
        int mid = (st+en) / 2;
        if(a[mid] < target) st = mid + 1;
        else if(a[mid] > target) en = mid - 1;
        else return 1;
    }
    
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int k;
    cin >> k;
    for(int i = 0 ; i < k ; i++) {
        int num;
        cin >> num;
        cout << binary_f(num) << "\n";
    }
}