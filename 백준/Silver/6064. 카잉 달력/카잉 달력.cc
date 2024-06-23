#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int m,n,x,y,flag;
        int ans = -1;
        cin >> m >> n >> x >> y;
        if(x == m) x = 0;
        if(y == n) y = 0;
        int l = lcm(m,n);
        for(int i = x ; i <= l ; i+=m) {
            if(i == 0) continue;
            if(i % n == y) {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
        
    }
}

