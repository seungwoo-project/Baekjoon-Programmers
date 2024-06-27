#include <bits/stdc++.h>
using namespace std;
int n;
int a[1004];
vector<int> ret;
vector<int> two;
int mx;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++) {
        for(int j = i ; j < n ; j++) {
            two.push_back(a[i] + a[j]);
        }
    }
    sort(two.begin(), two.end());
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            int k = a[i] - a[j];
            if(binary_search(two.begin(), two.end(), k)) {
                mx = max(mx, k + a[j]);
            }
        }
    }
    cout << mx;
}

// 4 5 7 12 20 6 8 13 21 10 15 23 20 28 36