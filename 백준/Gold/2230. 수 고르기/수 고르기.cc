#include <algorithm>
#include <ios>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n] = {0,};
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    int start = 0;
    int end = 0;

    int ret = 2e9;
    while(end != n) {
        if(a[end] - a[start] < m) {
            end++;
        } else {
            ret = min(ret, a[end] - a[start]);
            start++;
        }
    }

    cout << ret;
}

/*
 * 1 3 5
 */
