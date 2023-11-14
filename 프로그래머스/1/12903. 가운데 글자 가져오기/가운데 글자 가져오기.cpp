#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    cin >> s;
    if(s.size() % 2 == 0) {
        if(s.size() == 2) {
            answer = s[0];
            answer += s[1];
        } else {
            int mid = s.size() / 2;
            answer = s[mid-1];
            answer += s[mid];
        }
        
    } else {
        int mid = s.size() / 2;
        answer = s[mid];
    }
    return answer;
}