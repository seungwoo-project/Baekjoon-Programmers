#include <bits/stdc++.h>
using namespace std;
/**
p의 길이를 구함
t[0] 부터 p의 길이까지 파싱 후 비교
*/
int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0 ; i < t.size() - p.size() + 1; i++) {
        string s = t.substr(i, p.size());
        if(stoll(s) <= stoll(p)) answer++;
    }
    return answer;
}