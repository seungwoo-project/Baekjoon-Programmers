#include <bits/stdc++.h>
using namespace std;
int n, price;
int coin[14];
int sum;
int main() {
    cin >> n >> price;
    for(int i = 0 ; i < n ; i++) {
        cin >> coin[i];
    }
    
    sort(&coin[0], &coin[0] + 10, greater<int>()); // 내림차순 진행
    
    for(int i = 0 ; i < n ; i++) {
        if(price >= coin[i]) {
            sum += price / coin[i];
            price = price % coin[i];
        }
    }
    
    cout << sum;
    
}

