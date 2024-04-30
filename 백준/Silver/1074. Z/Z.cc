#include <bits/stdc++.h>
using namespace std;
int n, r, c;
int go(int n, int r , int c) {
    
    if(n == 0) {
        return 0;
    }
    
    int half = pow(2,n)/2;
    if(r < half && c < half) return go(n - 1, r, c);
    else if(r < half && c >= half) return half * half + go(n - 1, r, c - half);
    else if(r >= half && c < half) return 2 * half * half + go(n - 1 , r - half, c);
    else return 3 * half * half + go(n - 1 , r - half, c - half);
    
}
int main()
{
    cin >> n >> r >> c;
    cout << go(n,r,c);

    return 0;
}