#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
long long fn(long long b) {
    if(b == 1) return a*b%c;
    else if(b%2==0) {
        return fn(b/2) * fn(b/2) % c;
    } else {
        return fn(b/2) * fn(b/2+1) % c;
    }
}
int main()
{
    cin >> a >> b >> c;
    cout << fn(b);
    return 0;
}