#include <bits/stdc++.h>
using namespace std;

int n, ret = -2e9, a, b;
char c, op;
vector<int> vn, v; vector<char> vo;

bool pass(int i){
    for(auto it : v)
        if(it == i) return true;
    return false;
}

int opr(int a, int b, char op){
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;
}

void go(vector<int> vn){
    for(int i = v.size() - 1; i >= 0; i--){
        int idx = v[i];
        auto it = vn.begin();
        op = vo[idx]; a = vn[idx]; b = vn[idx + 1];
        vn.erase(it + idx, it + idx + 2);
        vn.insert(it + idx, opr(a, b, op));
    }
    for(int i = 0; i < vo.size(); i++){
        if(pass(i)) continue;
        auto it = vn.begin();
        op = vo[i]; a = vn[0]; b = vn[1];
        vn.erase(it, it + 2);
        vn.insert(it, opr(a, b, op));
    }
    ret = max(ret, vn[0]);
}

void combi(int s, int r){
    if(v.size() == r){
        go(vn);
    }
    for(int i = s + 2; i < vo.size(); i++){
        v.push_back(i);
        combi(i, r);
        v.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(i % 2 == 0) vn.push_back(c - '0');
        else vo.push_back(c);
    }
    for(int i = 1; i < n && i <= 5; i++){
        combi(-2, i);
    }
    if(n == 1) cout << vn[0] << "\n";
    else cout << ret << "\n";
    return 0;
}