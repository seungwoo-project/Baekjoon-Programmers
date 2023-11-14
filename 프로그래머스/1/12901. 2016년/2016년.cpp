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
5월 121일 지나고 24일 더 지나면 145일 
*/
map<int,int> mp;
map<int,string> ret;
int a,b;
string solution(int a, int b) {
    string answer = "";
    mp[1] = 31, mp[2] = 60, mp[3] = 91, mp[4] = 121, mp[5] = 152, mp[6] = 182, mp[7] = 213, mp[8] = 244;
    mp[9] = 274, mp[10] = 305, mp[11] = 335, mp[12] = 366;
    ret[0] = "FRI", ret[1] = "SAT", ret[2] = "SUN", ret[3] = "MON", ret[4] = "TUE", ret[5] = "WED";
    ret[6] = "THU";
    cin >> a >> b;
    int c =(mp[a-1] + b - 1) % 7;
    answer = ret[c];
    return answer;
}