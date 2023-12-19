#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i+1 ; j++) {
            cout << '*';
        }
        for(int k = 2*(n-i-1) ; k > 0 ; k--) {
            cout << ' ';
        }
        for(int j = 0 ; j < i+1 ; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = 1 ; i < n ; i++) {
        for(int j = n-i ; j > 0 ; j--) {
            cout << '*';
        }
        for(int k = 0 ; k < 2*i ; k++) {
            cout << ' ';
        }
        for(int j = n-i ; j > 0 ; j--) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}