#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int T,n,m;
int board[17][17];
int main() {
    cin >> T;
    for(int tc = 1 ; tc <= T; tc++) {
        memset(board, 0, sizeof(board));
        cin >> n >> m;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                cin >> board[i][j];
            }
        }

        // m*m사이즈 만큼 완탐 n - m + 1
        vector<int> v;
        for(int i = 0 ; i < n - m + 1 ; i++) {
            for(int j = 0 ; j < n - m + 1 ; j++) {
                int sum = 0;
                for(int k = 0; k < m; k++) {
                    for(int l = 0 ; l < m ; l++) {
                        sum += board[i+k][j+l];
                    }
                }
                v.push_back(sum);
            }
        }

        int answer = *max_element(v.begin(), v.end());
        cout << "#" << tc << " " << answer << '\n';
    }

    return 0;
}