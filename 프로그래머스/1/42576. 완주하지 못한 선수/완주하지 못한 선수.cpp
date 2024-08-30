#include <bits/stdc++.h>

using namespace std;
map<string, int> mp;
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(string s : participant) {
        mp[s]++;
    }
    
    for(string s : completion) {
        if(mp.find(s) != mp.end()) {
            mp[s]--;
        }
    }
    
    for(auto i : mp) {
        if(i.second == 1) return i.first;
    }
}