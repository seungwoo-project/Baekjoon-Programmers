#include <bits/stdc++.h>

using namespace std;
string fs;
int solution(string s) {
    int answer = 0;
    int f = 0;
    int d = 0;
    for(int i = 0 ; i < s.size(); i++) {
        if(fs == "") {
            fs = to_string(s[i]);
            f++;
            continue;
        }
        
        if(fs == to_string(s[i])) {
            f++;
        } else {
            d++;
        }
        
        if(f == d) {
            answer++;
            f = 0;
            d = 0;
            fs = "";
        }
        
    }
    
    if(fs != "") answer++;
    
    return answer;
}