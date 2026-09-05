// Now we are going to start our sorting algorithms journey, so buckle
// your seatbelts ;]
// Insertion sort is a sorting algorithm that builds the
// final sorted array (or list) one  item at a time by comparisons
// it is also an in-place and stable algorithm

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int numb[], int N);


int main(void) {
    // demo:
    int numb[10] = {10,1,2,5,43,23,60,21,93,3}, N = 10;
    insertionSort(numb,N);
    return EXIT_SUCCESS;
}


void insertionSort(int numb[], int N) {
    int i, j, l = 0, x;
    for (i = l + 1; i < N; i++) {
        x = numb[i];
        j = i - 1;
        while (j >= l && x < numb[j]) {
            numb[j + 1] = numb[j];
            j--;
        }
        numb[j + 1] = x;
    }
    // only for the sake of showing that it works.
    printf("sorted list:\n");
    for (i = 0; i < N;i++) {
        printf("index: %d || value: %d\n", i, numb[i]);
    }
}

