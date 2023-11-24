#include <bits/stdc++.h>

// mbti 형식문제
// 두 성격 유형 중 사전 순으로 빠른 성격 선택

using namespace std;
unordered_map<char, int> mp;
string s[] = {"RT", "CF", "JM", "AN"};
// 4보다 작으면 survey 0인덱스 4보다 크면 survey 1인덱스
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    for(int i = 0 ; i < survey.size() ; i++) {
        // 4보다 작으면 survey[i][0] 참조
        if(choices[i] < 4) {
            mp[survey[i][0]] += (4 - choices[i]); 
        } else if(choices[i] > 4) {
            mp[survey[i][1]] += (choices[i] - 4);
        }
    }
    for(int i = 0 ; i < 4 ; i++) {
        if(mp[s[i][0]] < mp[s[i][1]]) answer+=s[i][1];
        else if(mp[s[i][0]] > mp[s[i][1]]) answer+=s[i][0];
        else answer+=s[i][0];
    }
    return answer;
}