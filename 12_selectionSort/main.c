// Selection sort is another sorting algorithm with a little
// different approach. It divides into left subarray (sorted)
// and right subarray (unsorted). it looks among the right subarray
// to find the smallest value, compare it to i and if it's smaller
// then it will swap it. It's an in-place, but unstable algorithm
// and even at the best time complexity = O(N^2).


#include <stdio.h>
#include <stdlib.h>

void selectionSort(int numb[], int N);

int main(void) {
    //demo
    int numb[10] = {10,1,2,5,43,23,60,21,93,3}, N = 10;
    selectionSort(numb,N);
    return EXIT_SUCCESS;
}


void selectionSort(int numb[], int N) {
    int temp, min, i, j, l = 0, r = N - 1;
    for (i = l; i < r; i++) {
        min = i;
        for (j = i + 1; j <= r; j++) {
            if (numb[j] < numb[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = numb[i];
            numb[i] = numb[min];
            numb[min] = temp;
        }
    }
    // only for the sake of showing that it works.
    printf("sorted list:\n");
    for (i = 0; i < N;i++) {
        printf("index: %d || value: %d\n", i, numb[i]);
    }
}
