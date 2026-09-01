// Write a program that reads a file containing binary
// numbers (strings of 1s and 0s) and converts them
// into standard decimal integers.

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    FILE *fp;
    char ch;
    int bit, decimal = 0;
    fp = fopen("../02_baseConverter/input.txt", "r");
    if (fp == NULL) {
        printf("could not open the file!\n");
        return EXIT_FAILURE;
    }
    while (fscanf(fp, "%c", &ch) == 1) {
        if (ch == '\n' || ch == ' ') {
            printf("decimal value: %d\n", decimal);
        } else if (ch == '0' || ch == '1') {
            bit = ch - '0';
            decimal = (decimal * 2) + bit;
        }
    }
    if (decimal > 0) {
        printf("decimal value: %d\n", decimal);
    }
    fclose(fp);
    return EXIT_SUCCESS;
}