#include <bits/stdc++.h>
using namespace std;
vector<pair<int,string>> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k,l;
    unordered_map<string, int> mp;
    cin >> k >> l;
    for(int i = 0 ; i < l ; i++) {
        string s;
        cin >> s;
        mp[s] = i;
    }

    // for(auto a : mp) cout << a.first << " " << a.second << '\n';
    for(auto a : mp) {
        v.push_back({a.second, a.first});
    }

    sort(v.begin(), v.end());

    int en = min(k, (int)v.size());

    for(int i = 0 ; i < en ; i++) {
        cout << v[i].second << '\n';
    }
}