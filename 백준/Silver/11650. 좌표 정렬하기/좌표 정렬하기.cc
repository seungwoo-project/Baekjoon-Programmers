#include <bits/stdc++.h>
using namespace std;

int n,a,b;
vector<pair<int,int>> v;

// bool cmp(pair<int,int> a, pair<int,int> b) {
//     if(a.first == b.first) return a.second < b.second;
//     else return a.first < b.first;
// }
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a >> b;
        v.push_back({a,b});
    }
    
    sort(v.begin(), v.end());
    for(auto i : v) {
        cout << i.first << " " << i.second << '\n';
    }

    return 0;
}