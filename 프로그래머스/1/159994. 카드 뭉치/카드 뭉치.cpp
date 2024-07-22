#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int cnt1 = 0, cnt2 = 0;
    
    for(int i = 0 ; i < goal.size(); i++) {
        int idx1 = find(cards1.begin(), cards1.end(), goal[i]) - cards1.begin();
        int idx2 = find(cards2.begin(), cards2.end(), goal[i]) - cards2.begin();
        if(idx1 == cnt1 && idx1 != cards1.size()) {
            cnt1++;
        } else if(idx2 == cnt2 && idx2 != cards2.size()) {
            cnt2++;
        } else {
            return "No";
        }
        
    }
    
    return "Yes";
}