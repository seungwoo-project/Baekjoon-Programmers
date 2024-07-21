#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> mp;
unordered_map<string, int> jiso;
int gift[54][54], cnt[54];
int idx;
int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    for(int i = 0 ; i < friends.size(); i++) {
        mp[friends[i]] = i;
    }
    
    for(int i = 0 ; i < gifts.size(); i++) {
        for(int j = 0 ; j < gifts[i].size(); j++) {
            if(gifts[i][j] == ' ') {
                idx = j;
                break;
            }
        }
        string a = gifts[i].substr(0, idx);
        string b = gifts[i].substr(idx + 1, gifts[i].size());
        // cout << a << " " << b << '\n';
        gift[mp[a]][mp[b]]++;
        jiso[a]++;
        jiso[b]--;
    }
    // 지수 출력 확인 완료
    // for(int i = 0; i < friends.size(); i++) {
    //     cout << jiso[friends[i]] << '\n';
    // }
    for(int i = 0 ; i < friends.size(); i++) {
        for(int j = 0 ; j < friends.size(); j++) {
            if(i == j) continue;
            
            // 선물을 주고받지 않았거나 주고받은 수가 같다면 -> 선물 지수
            if(gift[i][j] - gift[j][i] == 0) {
                if(jiso[friends[i]] > jiso[friends[j]]) {
                    cnt[i]++;
                } else if(jiso[friends[i]] < jiso[friends[j]]) {
                    cnt[j]++;
                }
            } else { // 다르다면 -> 더 많이 준
                if(gift[i][j] > gift[j][i]) {
                    cnt[i]++;
                } else {
                    cnt[j]++;
                }
            }
        }
    }
    answer = *max_element(&cnt[0], &cnt[54]);
    
    return answer / 2;
}

// 1. 더 많은 선물을 준 사람이 다음 달에 선물을 하나 더 받음
// 2. 선물 지수(자신이 준 선물 - 받은 선물)가 더 큰 사람이 하나 받음