#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> v;
    vector<bool> state(m+1, true);
    state[1] = false;
    for(int i = 2 ; i * i <= m ; i++) {
        if(!state[i]) continue; 
        for(int j = i * i ; j <= m ; j+=i) {
            state[j] = false;
        }
    }
    
    for(int i = n ; i <= m ; i++) {
        if(state[i]) v.push_back(i);
    }
    
    for(int i : v) cout << i << '\n';
}

