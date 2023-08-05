#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(cin >> n) {
		long long a=1, dep=1;
		//나눠질때까지 1추가
		while(true) {
			if(a%n==0){
				cout << dep << '\n';
				break;
			} else {
				a=a*10+1;
				a%=n;
				dep++;
			}
		}
		
	}
	
	return 0;
}