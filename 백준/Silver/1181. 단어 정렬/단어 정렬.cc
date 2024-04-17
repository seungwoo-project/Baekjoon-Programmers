#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string> v;

bool cmp(string a, string b) {
    if(a.length() == b.length()) return a < b;
    else return a.length() < b.length();
}


int main()
{
    
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> s;
        if(find(v.begin(),v.end(),s) != v.end()) continue;
        v.push_back(s);
    }
    
    sort(v.begin(),v.end(), cmp);
    for(string a : v) {
        cout << a << '\n';
    }
    return 0;
}