#include <bits/stdc++.h>
using namespace std;

int n;
string name;
int age;
vector<tuple<int,string,int>> v;
bool cmp(tuple<int,string,int> a , tuple<int,string,int> b) {
    if(get<0>(a) == get<0>(b)) return get<2>(a) < get<2>(b);
    else return get<0>(a) < get<0>(b);
}
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> age >> name;
        v.push_back({age,name,i});
    }
    sort(v.begin(),v.end(),cmp);
    
    for(auto it : v) {
        cout << get<0>(it) << " " << get<1>(it) << '\n';
    }
    return 0;
}