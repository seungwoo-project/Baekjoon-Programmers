/******************************************************************************

8*8은 어디서든지 만들 수 있다.
8*8을 만들고 번갈아서 체킹 ?

만약 처음(짝수)이 W라면 다음꺼(홀수)는 B
i+j 가 짝수라면 , i+j 가 홀수라면
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int n,m;
int ans =987654321;
char a[54][54];
char al[104];
char tmp[104];
string w = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
string b = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";

int go(int y, int x) {
    
    int my = y + 8;
    int mx = x + 8;
    int k =0;
    for(int i = y ; i < my ; i++) {
        for(int j = x ; j < mx ; j++) {
           al[k] = a[i][j];
           k++;
        }
    }
    
    
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0 ; i < 64 ; i++) {
        if(w[i] != al[i]) cnt1++;
        if(b[i] != al[i]) cnt2++;
    }
    
    return min(cnt1, cnt2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    
    for(int i = 0 ; i <= n-8 ; i++) {
        for(int j = 0 ; j <= m-8 ; j++) {
            int ret = go(i,j);
            ans = min(ans, ret);
        }
    }

    cout << ans;
    return 0;
}