#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int arr[12];
int main() {
	cin >> s;
	for(char c : s) {
		if(c == '9' || c == '6') arr[6]++;
		else arr[c-'0']++;
	}
	if(arr[6] % 2 == 1) {
		arr[6] = arr[6] / 2 + 1;
	} else arr[6] = arr[6] / 2;
	int ret = *max_element(arr, arr+12);
	cout << ret;
	return 0;
}