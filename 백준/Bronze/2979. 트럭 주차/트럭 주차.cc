#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int t[100];
int s,e;
int sum;
int main() {
	cin >> a >> b >> c;
	for(int i = 0 ; i < 3 ; i++) {
		cin >> s >> e;
		for(int j = s; j <e; j++) {
			t[j]++;
		}
	}
	
	for(int i : t) {
		if(i) {
			if(i == 1) {
			sum+=i*a;
		} else if (i == 2) {
			sum+=i*b;
		} else if (i == 3) {
			sum+=i*c;
		}
		}
		
	}
	
	cout << sum;
	return 0;
}