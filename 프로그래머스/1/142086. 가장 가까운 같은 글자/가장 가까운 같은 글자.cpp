#include <bits/stdc++.h>

using namespace std;
map<char, int> mp;
vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0 ; i < s.size(); i++) {
        if(mp.find(s[i]) != mp.end()) {
            answer.push_back(i - mp[s[i]]);
            mp[s[i]] = i;
        } else {
            answer.push_back(-1);
            mp[s[i]] = i;
        }
    }
    return answer;
}