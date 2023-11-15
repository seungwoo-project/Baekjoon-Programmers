#include<bits/stdc++.h>
using namespace std;
int sy,sx;
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> result;
    for(int i = 0 ; i < park.size(); i++) {
        for(int j = 0 ; j < park[0].size(); j++) {
            if(park[i][j] == 'S') {sy = i ; sx = j;}
        }
    }
    
    for(int i = 0 ; i < routes.size(); i++) {
        int ty = sy, tx = sx;
        bool ok = false;
        cout << "[" << ty << "," << tx << "]"<< '\n';
        if(routes[i][0] == 'E') {
            for(int k = 0 ; k < routes[i][2] - '0' ; k++) {
                tx++;
                if(ty < 0 || ty >= park.size() || tx < 0 || tx >= park[0].size() || park[ty][tx] =='X') {
                    ok = true;
                    break;
                }
            }
            if(!ok) sx = sx + (routes[i][2] - '0');
            
        } else if(routes[i][0] == 'S') {
            for(int k = 0 ; k < routes[i][2] - '0' ; k++) {
                ty++;
                if(ty < 0 || ty >= park.size() || tx < 0 || tx >= park[0].size() || park[ty][tx] =='X') {
                    ok = true;
                    break;
                }
            }
            if(!ok) sy = sy + (routes[i][2] - '0');
        } else if(routes[i][0] == 'W') {
            for(int k = 0 ; k < routes[i][2] - '0' ; k++) {
                tx--;
                if(ty < 0 || ty >= park.size() || tx < 0 || tx >= park[0].size() || park[ty][tx] =='X') {
                    ok = true;
                    break;
                }
            }
            if(!ok) sx = sx - (routes[i][2] - '0');
        } else if(routes[i][0] == 'N') {
            for(int k = 0 ; k < routes[i][2] - '0' ; k++) {
                ty--;
                if(ty < 0 || ty >= park.size() || tx < 0 || tx >= park[0].size() || park[ty][tx] =='X') {
                    ok = true;
                    break;
                }
            }
            if(!ok) sy = sy - (routes[i][2] - '0');
        }
    }
    
    result.push_back(sy);
    result.push_back(sx);
    return result;
}