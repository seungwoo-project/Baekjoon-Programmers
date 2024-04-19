#include <bits/stdc++.h>
using namespace std;
int a[1000004];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++) {
        cout << a[i] << '\n';
    }

    return 0;
}