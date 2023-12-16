#include <bits/stdc++.h>
using namespace std;
int a[50];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            cin >> a[j];
        }
        int sum = accumulate(a,a+4,0);
        if(sum == 3) cout << "A" << '\n';
        else if(sum == 2) cout << "B" << '\n';
        else if(sum == 1) cout << "C" << '\n';
        else if(sum == 0) cout << "D" << '\n';
        else cout << "E" << '\n';
    }
    return 0;
}