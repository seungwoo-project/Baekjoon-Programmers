#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n];
    fill(a, a+n, 0);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    int end = 0;
    int sum = a[0];
    int cnt = 0;
    for(int start = 0 ; start < n ; start++) {
        while(end < n && sum < m) {
            end++;
            if(end != n) sum += a[end];
        }

        if(end == n) break;
        if(sum == m) cnt++;
        sum -= a[start];
    }

    cout << cnt;
}
