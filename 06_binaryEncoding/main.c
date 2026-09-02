// Given an integer number (>=0), write a C program that determines its
// binary encoding and prints the individual bits of the binary conversion
// nothing special, I'm just trying to do somethings without the use of arrays
// fun fact: if you're thinking that when the while condition will be false
// there is a technique called rounding to even, that is when a number in
// computer is exactly in the middle but we have to round it to integer,
// or a number because of limitation or ... we round it to closest even number
// e.g: 1.5 rounds to 2. and this technique is,,, NOT USED HERE XD. in C when
// you have an integer with numbers after decimal point, it will just discard all
// those numbers after the decimal point.

#include <stdio.h>
#include <stdlib.h>

void binaryEncoding(int n);

int main(void) {
    int n;
    printf("please enter an integer(>=0): ");
    scanf("%d", &n);
    binaryEncoding(n);
    return EXIT_SUCCESS;
}

void binaryEncoding(int n) {
    int p;
    for (p = 1; 2 * p <= n; p = p * 2);
    while (p > 0) {
        if (p <= n) {
            printf("1");
            n = n - p;
        } else printf("0");
        p = p / 2;
    }
    printf("\n");
}
