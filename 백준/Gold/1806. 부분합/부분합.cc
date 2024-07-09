#include <bits/stdc++.h>
using namespace std;
int a[100004], psum[100004];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, s;
    cin >> n >> s;

    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        if(a[i] >= s) {
            cout << 1;
            return 0;
        }
    }


    for(int i = 1; i <= n ; i++) {
        psum[i] = psum[i - 1] + a[i];
    }
    int start = 0;
    int end = 1;

    int ret = 1e9 + 4;
    /*
     * 최소길이를 구함
     */
    while(end != n + 1) {
        if(psum[end] - psum[start] < s) end++;
        else {
            ret = min(ret, end - start);
            start++;
        }
    }

    if(ret == 1e9 + 4) {
        cout << 0;
    } else cout << ret;
    return 0;

}
