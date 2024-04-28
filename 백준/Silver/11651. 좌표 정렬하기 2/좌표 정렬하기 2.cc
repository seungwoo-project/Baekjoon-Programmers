#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int n,a,b;
bool cmp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while(n--) {
        cin >> a >> b;
        v.push_back({a,b});
    }
    
    sort(v.begin(),v.end(), cmp);
    
    for(auto i : v) {
        cout << i.first << " " << i.second << '\n';
    }
    return 0;
}