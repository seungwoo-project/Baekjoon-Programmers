#include <bits/stdc++.h>
using namespace std;
int n;
string ret;
string s;
vector<string> v;
vector<string> result;
int k;
bool compare(string a, string b){
if(a.size() == b.size()) return a < b;
return a.size() < b.size();
}
int main() {

	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> s;
		for(char c : s) {
			if(c >= '0' && c <= '9') {
				ret+=c;
			} else {
				v.push_back(ret);
				ret="";
			}
		}
		v.push_back(ret);
		ret = "";
	}
	for(string s : v) {
		if(s == "") continue;
		if(s[0] == '0') {
			for(k = 1 ; k < s.size() ; k++) {
				if(s[k] != '0') break;
			}
			s.erase(0,k);
			if(s=="") result.push_back("0");
			else result.push_back(s);
		} else{
			result.push_back(s);
		}
		
	}
	sort(result.begin(),result.end(),compare);
	for(string s : result) cout << s << '\n';
	return 0;
}