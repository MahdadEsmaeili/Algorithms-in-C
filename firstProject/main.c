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
    printf("Elevator will travel to the %d floor", actualFloor);

    return 0;
}
