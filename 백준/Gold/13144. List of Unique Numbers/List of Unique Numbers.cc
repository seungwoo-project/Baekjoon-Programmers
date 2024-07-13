#include <iostream>
using namespace std;
typedef long long ll;
int a[100004];
ll cnt;
bool tmp[100004];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    int end = 0;
    for(int start = 0 ; start < n; start++) {
        while(end < n) {
            if(tmp[a[end]]) {
                break;
            }
            tmp[a[end]] = 1;
            end++;
        }

        cnt += (end - start);
        tmp[a[start]] = 0;

    }

    cout << cnt;
}