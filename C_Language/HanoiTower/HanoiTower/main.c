//
//  main.c
//  HanoiTower
//
//  Created by SonChangWoo on 2016. 7. 4..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to);

int main() {
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}

void HanoiTowerMove(int num, char from, char by, char to) {
    if (num==1) {
        printf("towerNumber1 %c from %c to\n", from, to);
    } else {
        HanoiTowerMove(num-1, from, to, by);
        printf("towerNumber%d %c from %c to\n", num, from, to);
        HanoiTowerMove(num-1, by, from, to);
    }
}
