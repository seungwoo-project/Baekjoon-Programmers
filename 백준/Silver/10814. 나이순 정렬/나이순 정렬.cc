#include <bits/stdc++.h>
using namespace std;

int n;
string name;
int age;
vector<pair<int,string>> v;
bool cmp(pair<int,string> a , pair<int,string> b) {
    return a.first < b.first;
}
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> age >> name;
        v.push_back({age,name});
    }
    stable_sort(v.begin(),v.end(),cmp); // 상대값 유지 한 채 정렬
    
    for(auto it : v) {
        cout << it.first  << " " << it.second << '\n';
    }
    return 0;
}