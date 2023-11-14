#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int solution(vector<int> nums)
{
    int answer = 0;
    for(int i : nums) mp[i]++;
    if(mp.size() <= nums.size()/2) {
        answer = mp.size();
    } else {
        answer = nums.size()/2;
    }
    
    return answer;
}