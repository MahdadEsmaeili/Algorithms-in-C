// Bubble sort is also another sorting algorithm which
// looks for the largest value in the left subarray (unsorted)
// and put it at the leftmost position in the right subarray (sorted)
// Bubble sort is an in-place and stable sorting algorithm.
// The second function bubbleSortOpt is the optimization of the
// algorithm that improves the average time complexity
// (worst case complexity is still the same)

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int numb[], int N);
void bubbleSortOpt(int numb[], int N);

int main(void) {
    //demo
    int numb[10] = {10,1,2,5,43,23,60,21,93,3}, N = 10;
    bubbleSort(numb,N);

    return EXIT_SUCCESS;
}


void bubbleSort(int numb[], int N) {
    // the variable l is just zero so it does not have
    // any significant importance, we just want it to be
    // there so the code is easier to understand and more coherent.
    int temp, i, j, l = 0, r = N-1;
    for (i = l; i < r; i++) {
        for (j = l; j < r - i + l; j++) {
            if (numb[j]> numb[j+1]) {
                temp = numb[j];
                numb[j] = numb[j+1];
                numb[j+1] = temp;
            }
        }
    }
    // only for the sake of showing that it works.
    printf("sorted list:\n");
    for (i = 0; i < N;i++) {
        printf("index: %d || value: %d\n", i, numb[i]);
    }
}


void bubbleSortOpt(int numb[], int N) {
    int temp, i, j, l = 0, r = N-1, flag = 1;
    for (i = l; i < r && flag == 1; i++) {
        flag = 0;
        for (j = l; j < r - i + l; j++) {
            if (numb[j]> numb[j+1]) {
                flag = 1;
                temp = numb[j];
                numb[j] = numb[j+1];
                numb[j+1] = temp;
            }
        }
    }
}