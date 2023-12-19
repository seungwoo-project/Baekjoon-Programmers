#include <bits/stdc++.h>
using namespace std;
int a, b;
vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main() {
    for(int i = 0 ; i < 10 ; i++) {
        cin >> a >> b;
        reverse(v.begin()+(a-1), v.begin()+b);
    }
    for(int i : v) cout << i << ' ';
    return 0;
}