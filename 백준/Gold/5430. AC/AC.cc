#include <bits/stdc++.h>
using namespace std;
void ret_print(deque<int> dq, bool reverse) {
    cout << '[';
    if(!dq.empty()){
        if(reverse) {
        while(dq.size() != 1) {
            cout << dq.back() << ',';
            dq.pop_back();
        }
            cout << dq.back();
        } else {
            while(dq.size() != 1) {
                cout << dq.front() << ',';
                dq.pop_front();
            }
            cout << dq.front();
        }
    }
    
    cout << "]\n";
}
void parse(string n, deque<int> &dq) {
    string s = "";
    for(char c : n) {
        if(isdigit(c)) {
            s += c;
        } else if(c == ']' || c == ','){
            dq.push_back(stoi(s));
            s = "";
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++) {
        bool reverse = false;
        bool error = false;
        deque<int> dq;
        string p; // 수행할 함수
        cin >> p;
        int m;
        cin >> m;
        string n;
        cin >> n; // [123,23,31]..
        
        if(m == 0) {
            for(char c : p) {
                if(c == 'D') {
                    error = true;
                }
            }
            if(error) {
                cout << "error\n";
                continue;
            } else {
                cout << "[]\n";
                continue;
            }
        }
        parse(n, dq);
    
        for(char c : p) {
            if(c == 'R') {
                reverse = !reverse; // false는 리버스x
            }else {
                if(dq.empty()) {
                    error = true;
                    break;
                }
                if(reverse) dq.pop_back();
                else dq.pop_front();
            } 
        }
        
        if(error) cout << "error" << '\n';
        else {
            ret_print(dq, reverse);
        }
        
        
    }
}