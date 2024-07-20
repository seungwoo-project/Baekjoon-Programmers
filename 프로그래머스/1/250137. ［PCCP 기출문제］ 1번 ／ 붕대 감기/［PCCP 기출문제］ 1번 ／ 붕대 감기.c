#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이 4, attacks_cols는 2차원 배열 attacks의 열 길이 2입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int max_health = health;
    int maxtime = attacks[attacks_rows - 1][0];
    int sequence = 0;
    
    for(int time = 1; time <= maxtime ; time++) {
        int flag = 0;
        sequence++;
        for(int i = 0 ; i < attacks_rows; i++) {
            if(attacks[i][0] == time) {
                health -= attacks[i][1];
                if(health <= 0) return -1;
                sequence = 0;
                flag = 1; // 몬스터 한테 맞음
                break;
            }
        }
        // 몬스터한테 안맞았다면 붕대 힐
        if(!flag) {
            if(health + bandage[1] > max_health) health = max_health;
            else health += bandage[1];

            if(sequence == bandage[0]) {
                if(health + bandage[2] > max_health) health = max_health;
                else health += bandage[2];
                sequence = 0;
            }
        }
    }
    

    
    return health;
}