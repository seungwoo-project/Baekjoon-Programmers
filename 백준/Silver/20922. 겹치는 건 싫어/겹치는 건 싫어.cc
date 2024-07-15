#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int> v;
    map<int,int> mp;
    int n, k, cnt = 0, ret = 0;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) {
        int N;
        cin >> N;
        v.push_back(N);
    }

    int end = 0;
    for(int start = 0 ; start < n ; start++) {
        while(end < n && mp[v[end]] < k) {
            mp[v[end]]++;
            end++;
        }

        ret = max(ret, end - start);

        if(mp[v[start]]) mp[v[start]]--;
    }

    cout << ret;
}