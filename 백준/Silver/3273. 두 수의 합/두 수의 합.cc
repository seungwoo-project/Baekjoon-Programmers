#include <bits/stdc++.h>
using namespace std;
int n,ans,cnt,flag[2000004];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int arr[n];
	fill(arr,arr+n,0);
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cin >> ans;
	
	for(int i = 0 ; i < n ; i++) {
		if(ans-arr[i] >= 0) {
			if(flag[ans-arr[i]]) cnt++;
			else flag[arr[i]] = 1;
		}
		
	}
	cout << cnt;
	return 0;
}