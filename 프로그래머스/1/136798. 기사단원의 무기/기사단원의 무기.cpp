#include <bits/stdc++.h>

using namespace std;
vector<int> v;
vector<int> sum;
int cnt;
int solution(int number, int limit, int power) {
    int answer = 0;
    
    // 1부터 number까지
    for(int i = 1 ; i <= number; i++) {
        cnt = 0;
        // 약수의 개수
        for(int j = 1 ; j <= sqrt(i); j++) {
            if(i % j == 0) {
                cnt++;
                if(i / j != j) cnt++;
            }
        }
        
        v.push_back(cnt);
        
    }
    
    for(int i : v) {
        if(i > limit) sum.push_back(power);
        else sum.push_back(i);
    }
    
    answer = accumulate(sum.begin(), sum.end(), 0);
    return answer;
}