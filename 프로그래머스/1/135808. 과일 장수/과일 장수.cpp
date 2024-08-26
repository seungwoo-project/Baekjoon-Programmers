#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> box;
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), greater<int>());
    int cnt = 0;
    for(int i = 0 ; i < score.size(); i++) {
        if(cnt == m) {
            v.push_back(box);
            box.clear();
            cnt = 0;
        }
        
        cnt++;
        box.push_back(score[i]);
    }
    
    if(cnt == m) v.push_back(box);
    for(vector<int> a : v) {
        answer += (*min_element(a.begin(), a.end()) * m);    
    }
    return answer;
}

