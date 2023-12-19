#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i ; j++) {
            cout << ' ';
        }
        for(int k = n-i ; k > 0 ; k--) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}