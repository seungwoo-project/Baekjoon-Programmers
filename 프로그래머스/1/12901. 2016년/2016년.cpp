#include<bits/stdc++.h>
using namespace std;
/*
1월 31일
2월 29일
3월 31일
4월 30일
5월 31일
6월 30일
7월 31일
8월 31일
9월 30일
10월 31일
11월 30일
12월 31일
*/

int a,b,c,sum;
string solution(int a, int b) {
    string answer = "";
    int day[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string ret[] = {"SUN", "MON" , "TUE", "WED", "THU", "FRI", "SAT"};
    cin >> a >> b;
    for(int i = 0 ; i < a - 1 ; i++) {
        sum += day[i];
    }
    c = ((sum + b + 4) % 7);
    answer = ret[c];
    return answer;
}