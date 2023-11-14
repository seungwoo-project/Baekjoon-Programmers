#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> mp;
vector<string> solution(vector<string> players, vector<string> callings) {
    // 선수들의 순위 매핑
    for(int i = 0 ; i < players.size() ; i++) {
        mp[players[i]] = i;
    }
    
    for(string s : callings) { // mp[s]는 그 사람의 순위를 나타냄
        string q = players[mp[s]];
        string w = players[mp[s] - 1];
        swap(players[mp[s]], players[mp[s] - 1]);
        
        mp[q]--;
        mp[w]++;
    }

    return players;
}