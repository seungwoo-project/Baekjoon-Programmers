#include<bits/stdc++.h>
using namespace std;
int parsing(string s) {
    int year = stoi(s.substr(0,4)) - 2000;
    int month = stoi(s.substr(5,2)) - 1;
    int day = stoi(s.substr(8)) - 1;
    
    int sum = (year * 336) + (month * 28) + day;
    return sum;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int result = 0;
    int p_today = parsing(today);
    int diff;
    int term[30];
    for(int i = 0 ; i < terms.size() ; i++) {
        char termsA = terms[i][0];
        int termsN = stoi(terms[i].substr(2));
        term[termsA - 'A'] = termsN * 28;
    }
    
    for(int i = 0 ; i < privacies.size() ; i++) {
        int p_privacies = parsing(privacies[i]);
        
        char priA = privacies[i][11];
        
        diff = p_today - p_privacies;
        
        if(diff >= term[priA - 'A']) answer.push_back(i+1);
    
    }
    
    
    return answer;
}
// 678707