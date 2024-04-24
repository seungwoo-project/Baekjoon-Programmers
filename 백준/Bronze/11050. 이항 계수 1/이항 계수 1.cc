#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> cb;
int cnt;
void combi(int start) {
    if(cb.size() == k) {
        cnt++;
        return ;
    }
    
    for(int i = start + 1 ; i < n ; i++) {
        cb.push_back(i);
        combi(i);
        cb.pop_back();
    }
    
    return ;
}
int main()
{
    cin >> n >> k;
    
    combi(-1);
    cout << cnt;
    return 0;
}