#include <bits/stdc++.h>
using namespace std;
// q.push() - 뒤에 넣음, q.pop() - 앞에꺼 뺌, q.front() - 앞에꺼 참조
// 뒤에다 넣는 방법은? deque?
int cnt;
deque<int> dq1, dq2;
deque<int> tmp;
int solution(vector<int> queue1, vector<int> queue2) {
    for(int i : queue1) dq1.push_back(i); 
    for(int i : queue2) dq2.push_back(i); 
    tmp = dq1;
    long long int sumq1 = accumulate(dq1.begin(),dq1.end(),0LL); 
    long long int sumq2 = accumulate(dq2.begin(),dq2.end(),0LL);
    if ((sumq1+sumq2)%2 == 1) return -1;
    while(1) {
        if(sumq1 == sumq2) {
            return cnt;
        }
        if(dq1.size() == 0 || dq2.size() == 0) {
            return -1;
        }
       
        if(sumq1 < sumq2) {
            int n = dq2.front(); //q2에서 하나 빼요
            sumq2 -= n;
            dq2.pop_front();
            dq1.push_back(n);
            sumq1 += n;
            cnt++; // 넣고뺏다 했으면 카운트올려요
        } else if(sumq1 > sumq2) {
            int n = dq1.front(); //q2에서 하나 빼요
            sumq1 -= n;
            dq1.pop_front();
            dq2.push_back(n);
            sumq2 += n;
            cnt++;
        }
        if(cnt >= 300000) return -1;
        if(tmp == dq1) return -1;
    }
}
