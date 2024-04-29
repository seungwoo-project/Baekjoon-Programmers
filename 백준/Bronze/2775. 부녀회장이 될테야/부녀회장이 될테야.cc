#include <bits/stdc++.h>
using namespace std;
int n,k,t;
int a[15][15];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    while(t--) {
        memset(a,0,sizeof(a));
        cin >> n >> k;
        for(int i = 1 ; i <= k ; i++) {
            a[0][i] = i;
        }
        
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= k ; j++) {
                int sum = 0;
                for(int q = 1 ; q <= j ; q++) {
                    sum += a[i-1][q];
                }
                a[i][j] = sum;
            }
        }

        cout << a[n][k] << '\n';
    }
    return 0;
}