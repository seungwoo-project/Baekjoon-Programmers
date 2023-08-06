#include <bits/stdc++.h>
using namespace std;
int n;
string p, q;
int pos;
string st, en, sten;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	cin >> p;
	
	pos = p.find('*');
	st= p.substr(0,pos);
	en= p.substr(pos+1);
	sten=st+en;
	for(int i = 0 ; i < n ; i++) {
		cin >> q;
		if(sten.size() <= q.size() && q.substr(0,st.size())==st && q.substr(q.size()-en.size())==en) {
			cout << "DA" << '\n';
		} else cout << "NE" << '\n';
	}
	return 0;
}