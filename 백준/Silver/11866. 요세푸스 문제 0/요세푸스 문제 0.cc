/******************************************************************************

7 3
<3, 6, 2, 7, 5, 1, 4>

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int n,k,a;
deque<int> dq;
int main()
{
    cin >> n >> k;
    
    for(int i = 1 ; i <= n ; i++) {
        dq.push_back(i);
    }
    
    auto it = dq.begin();
    
    cout << "<";
    while(dq.size() - 1) {
        for(int i = 0 ; i < k - 1 ; i++) {
            it++;
            if(it == dq.end()) {
                it = dq.begin();
            }
        }
        cout << *it << ", ";
        it = dq.erase(it);
        if(it == dq.end()) {
            it = dq.begin();
        }
    }
    cout << *it << ">";
    return 0;
}