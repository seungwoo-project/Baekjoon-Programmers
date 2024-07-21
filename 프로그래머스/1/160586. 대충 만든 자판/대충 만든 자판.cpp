#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(int i = 0 ; i < targets.size(); i++) {
        int flag = 0;
        int ret = 0;
        for(int j = 0 ; j < targets[i].size(); j++) {
            char tg = targets[i][j];
            int mn = 104;
            for(int k = 0 ; k < keymap.size(); k++) {
                for(int l = 0 ; l < keymap[k].size(); l++) {
                    if(keymap[k][l] == tg) {
                        mn = min(mn, l + 1);
                        break;
                    }   
                }
            }
            if(mn == 104) {
                flag = 1;
                break;
            }
            ret += mn;
        }
        if(flag) {
            answer.push_back(-1);
        } else {
            answer.push_back(ret);        
        }
    }
    return answer;
}