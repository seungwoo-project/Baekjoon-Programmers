#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    
    int min_left;
    int min_right;
    int left = 0;
    int right = n - 1;
    int ans = 2000000004;
    while(left < right) {
      
      if(ans >= abs(v[left] + v[right])) {
          min_left = left;
          min_right = right;
          ans = abs(v[left] + v[right]);
      }
      
      if(v[left] + v[right] < 0) {
          left++;
      } else if(v[left] + v[right] > 0) {
          right--;
      } else {
          break;
      }
    }
    
    cout << v[min_left] << " " << v[min_right];
}

