#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int a;
int main() {
    for(int i = 0 ; i < 3 ; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i : v) cout << i << ' ';
    return 0;
}