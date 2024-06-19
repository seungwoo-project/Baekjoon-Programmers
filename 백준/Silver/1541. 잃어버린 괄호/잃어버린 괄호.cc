#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  string s;
  cin >> s;
  string tmp = "";
  vector<string> v;
  for(int i = 0 ; i < s.size(); i++) {
      
      if(s[i] == '-') {
          v.push_back(tmp);
          v.push_back("-");
          tmp = "";
          continue;
      }
      
      if(s[i] == '+') {
          v.push_back(tmp);
          v.push_back("+");
          tmp = "";
          continue;
      }
      tmp += s[i];
  }
  v.push_back(tmp);
  
//   for(string a : v) cout << a << " ";
    
  int num = 0;
  vector<string> ret;
  for(int i = 0 ; i < v.size() ; i++) {
      if(v[i] == "-") {
          ret.push_back(to_string(num));
          ret.push_back("-");
          num = 0;
          continue;
      }
      
      if(v[i] == "+") continue;
      
      num += stoi(v[i]);
  } 
  ret.push_back(to_string(num));
  int ans = stoi(ret[0]);
  for(int i = 1 ; i < ret.size(); i++) {
      if(ret[i] == "-") continue;
      ans -= stoi(ret[i]);
  }
  
  cout << ans;
}

// 파싱 후 마이너스 만나면 다 더해주고 빼줌
