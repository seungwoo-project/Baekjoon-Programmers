#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int> v;
    int n, k;
    int cnt = 0;
    int ret = 0;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) {
        int N;
        cin >> N;
        v.push_back(N);
    }

    int e = 0;
    for(int s = 0 ; s < n ; s++) {
        while(e < n && cnt <= k) {
            // 홀수이면
            if(v[e] % 2 != 0) {
                cnt++;
            }

            e++;
        }

        ret = max(ret, e-s-cnt);
        if(v[s] % 2 != 0) {
            cnt--;
        }

    }

    cout << ret;
}