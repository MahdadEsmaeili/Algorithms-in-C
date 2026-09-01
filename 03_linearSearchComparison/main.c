// A comparison between 2 linear search algorithms
// one scan the array from first to last element: always N operations
// one scan the array and use a flag so when the desired number found,
// it will stop => has at most N operations
// btw this is the first time that we use functions (except main).
// if you are wondering why we declared the functions and just didn't
// write them above the main, I have to say in C we have to first create
//prototypes (function declaration) of functions and then write them wherever
// we want, the reason is if we want to call function a in function b and call
// function b in function a, it is impossible to write both of them on top of
// each other, so we declare them beforehand and then use them easily after.

#include <stdio.h>
#include <stdlib.h>


void linearSearch(int v[], int N, int k);

void linearSearchOptimized(int v[], int N, int k);

int main(void) {
    int N = 8, v[8] = {1, 2, 3, 4, 5, 6, 7, 8}, k = 4;

    printf("=== running standard linear search ===\n");
    linearSearch(v, N, k);

    printf("\n=== running optimized linear search ===\n");
    linearSearchOptimized(v, N, k);


    return EXIT_SUCCESS;
}

void linearSearch(int v[], int N, int k) {
    int i, index = -1;
    for (i = 0; i < N; i++) {
        if (v[i] == k) {
            index = i;
        }
        printf("index: %d number in array: %d\n", i, v[i]);
    }
    if (index != -1)
        printf("number found! | number = %d\n", v[index]);
    else
        printf("number not found!");
}

void linearSearchOptimized(int v[], int N, int k) {
    int i = 0, index = -1;
    while (i < N && index == -1) {
        printf("index: %d number in array: %d\n", i, v[i]);
        if (v[i] == k) {
            index = i;
        } else i++;
    }
    if (index != -1)
        printf("number found! | number = %d\n", v[index]);
    else
        printf("number not found!");
}