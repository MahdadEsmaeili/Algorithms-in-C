// Hello. this is my first project in C, I used C language before
// but I'm trying to learn it again from scratch and continue till
//I reach to more advanced algorithms and data structures.
//This project is an elementary code as the firstProject so don't expect much ;]git
#include <stdio.h>

int main(void) {
    // This program simulates an elevator that skips the 13 floor
    int floor, actualFloor;
    printf("Please enter the number of the floor:");
    scanf("%d", &floor);
    if (floor >= 13) {
        actualFloor = floor + 1;
    } else {
        actualFloor = floor;
    }
    printf("Elevator will travel to the floor: %d", actualFloor);

    return 0;
}
