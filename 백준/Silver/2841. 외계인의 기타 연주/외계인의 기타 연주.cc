#include <bits/stdc++.h>
using namespace std;
stack<int> stk[10];
int na,pa,j,p;
int cnt;
int main() {
	cin >> na >> pa;
	
	for(int i = 0 ; i < na ; i++) {
	    cin >> j >> p;
	    if(stk[j].empty()) {
	        stk[j].push(p);
	        cnt++;
	    } else {
	        if(p > stk[j].top()) {
	            stk[j].push(p); cnt++;
	        } else if(p == stk[j].top()) {
	            continue;
	        } else { // 스택탑에 있는값이 들어오는 값보다 큰경우 
	            while(!stk[j].empty() && stk[j].top() > p) {
	                stk[j].pop();
	                cnt++;
	            }
	            if(!stk[j].empty() && stk[j].top() == p) {
	                continue;
	            } 
	            stk[j].push(p);
	            cnt++;
	            
	        }
	    }
	}
	
	cout << cnt;
	return 0;
}

// 8 10 12
// 12 10 8 5

// 2번 
// 만약 stk.top() 보다 작으면  cnt++;
// 크면 push() 후에 cnt++; 

 