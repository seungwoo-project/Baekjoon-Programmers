#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    while(1) {
        cin >> s;
        if(s == "0") return 0;
        
        string s2 = s;
        reverse(s.begin(),s.end());
        if(s2 == s) cout << "yes\n";
        else cout << "no\n";
    }
    
    return 0;
    
}