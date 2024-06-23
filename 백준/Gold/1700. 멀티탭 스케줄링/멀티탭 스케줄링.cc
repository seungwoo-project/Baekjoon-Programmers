#include <bits/stdc++.h>
using namespace std;
int s[104], tap[104];
int cnt;
int main() {
    int n,k;
    cin >> n >> k;
    for(int i = 0 ; i < k ; i ++) {
        cin >> s[i];
    }
    
    for(int i = 0 ; i < k ; i++) {
        bool pass = false;
        // 멀티탭에 꽂혀있는 스케줄러가 있으면 넘김
        for(int j = 0 ; j < n ; j++) {
            if(s[i] == tap[j]) {
                pass = true;
                break;
            }
        }
        
        if(pass) continue;
        
        for(int j = 0 ; j < n ; j++) {
            if(tap[j] == 0) {
                tap[j] = s[i];
                pass = true;
                break;
            }
        }
        
        if(pass) continue;
        
        int pos = -1;
        int idx = -1;
        for(int j = 0 ; j < n ; j++) {
            int tmp = 0;
            
            for(int l = i+1 ; l < k; l++) {
                if(tap[j] == s[l]) break;
                tmp++;
            }
            if(tmp > idx) {
                pos = j;
                idx = tmp;
            }
        }
        
        tap[pos] = s[i];
        cnt++;
        
    }
    
    cout << cnt;
}

