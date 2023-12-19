#include <bits/stdc++.h>
using namespace std;
// 영식 30초 : 10원
// 민식 60초 : 15원
int n, a;
int cnt1, cnt2;
int y = 30 , m = 60;
vector<int> v1, v2;
int main() { 
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a;
        v1.push_back(a);
        v2.push_back(a);
    }
    
    for(int i : v1) {
        while(i >= 0) {
            cnt1++;
            i -= y;
        }
    }
    
    for(int i : v2) {
        while(i >= 0) {
            cnt2++;
            i -= m;
        }
    }
    if((cnt1*10) < (cnt2*15)) {
        cout << "Y " << cnt1*10; 
    } else if((cnt1*10) > (cnt2*15)) {
        cout << "M " << cnt2*15;
    } else {
        cout << "Y M " << cnt1*10; 
    }
    return 0;
}