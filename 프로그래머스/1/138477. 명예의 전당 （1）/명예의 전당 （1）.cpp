#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> kk;
    for(int i : score) {
        kk.push_back(i);
        sort(kk.begin(), kk.end(), greater<int>());
        if(kk.size() < k) {
            answer.push_back(kk[kk.size() - 1]);
        } else {
            answer.push_back(kk[k-1]);
        }
    }
    return answer;
}