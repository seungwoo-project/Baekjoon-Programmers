#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    if(n == 1) {
        return 0;
    }
    int i = 2;
    while(n > 1) {
        if(i * i > n) break;
        if(n % i == 0) {
            v.push_back(i);
            n/=i;
        } else {
            i++;
        }
    }
    v.push_back(n);
    for(int i : v) cout << i << '\n';
}

