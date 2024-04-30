#include <bits/stdc++.h>
using namespace std;
int n;
void f(int a, int b , int n) {
    if(n == 1) {
        cout << a << ' ' << b << '\n';
        return ;
    }
    f(a, 6-a-b, n-1);
    cout << a << ' ' << b << '\n';
    f(6-a-b, b, n-1);
    
}
int main()
{
    cin >> n;
    cout << (1<<n) - 1 << '\n';
    f(1,3,n);

    return 0;
}