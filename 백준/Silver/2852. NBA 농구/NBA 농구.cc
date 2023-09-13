#include <bits/stdc++.h>
using namespace std;
int n,team,m,s;
int A,B;
int sum,asum,bsum;
int pre;
int main() {
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d %d:%d", &team, &m, &s);
		int t =  m * 60 + s;
		if(A>B) asum += t-pre;
		else if(B>A) bsum += t-pre;
		team == 1 ? A++ : B++;
		pre = t;
	}
	if(A>B) asum += 2880-pre;
	else if(B>A) bsum += 2880-pre;
	printf("%02d:%02d\n",asum/60,asum%60);
	printf("%02d:%02d\n",bsum/60,bsum%60);
}