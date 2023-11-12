#include <bits/stdc++.h>
using namespace std;
int t, a;
int main() {
	cin >> t;
    for(int i = 1 ; i <= t ; i++) {
        double sum = 0;
        for(int j = 0 ; j < 10 ; j++) {
        	cin >> a;
            sum += a;
        }
        
        cout << "#" << i << " " << round(sum/10) << '\n';
    }
}