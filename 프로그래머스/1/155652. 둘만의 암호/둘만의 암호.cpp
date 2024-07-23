#include <bits/stdc++.h>
using namespace std;
/**
s의 각 알파벳을 index만큼 뒤 알파벳으로 바꾼다.
바꾸는 과정에서 skip에 포함되는 알파벳 tmp만큼 뒤로 넘긴다. (z를 넘어가면 a로 바꾼다.) 
*/


string solution(string s, string skip, int index) {
    string answer = "";
    string al = "";
    for(int i = 0 ; i < 26 ; i++) {
        al += 'a' + i;
    }
    
    for(char c : skip) {
        al.erase(remove(al.begin(), al.end(), c), al.end());
    }
    
    for(char c : s) {
        int idx = al.find(c);
        answer += al[(idx + index) % al.size()];
    }
    return answer;
}

// abcdefghijk
// 97 ~ 122