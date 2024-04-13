/******************************************************************************

map함수를 써서 듣도 명단과 보도 명단에 각각 이름이 있다면 이름이 2번 불릴것이다.
2번 불린 map의 key를 출력하자.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
vector<string> v;
int cnt = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 0 ; i < n+m ; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }
    
    for(auto it : mp) {
        if(it.second == 2) {
            cnt++;
            v.push_back(it.first);
        }
    }
    sort(v.begin(), v.end());
    
    cout << cnt << '\n';
    for(string s : v) {
        cout << s << '\n';
    }

    return 0;
}