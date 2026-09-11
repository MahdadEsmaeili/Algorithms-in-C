// Shell sort is a generalized version of the insertion sort
// algorithm. It first sorts elements that are far apart from
// each other and successively reduces the interval between
// the elements to be sorted. It has different sequences but
// we use Knuth's sequence which has complexity of O(N^3/2)
// There's much to learn about it, go search for yourself.


#include <stdio.h>
#include <stdlib.h>

void shellSort(int numb[], int N);

int main(void) {
    //demo
    int numb[12] = {10, 1, 2, 5, 43, 23, 60, 21, 93, 3, 34, 51}, N = 12;
    shellSort(numb, N);

    return EXIT_SUCCESS;
}


void shellSort(int numb[], int N) {
    int x, i, j, l = 0, r = N - 1, h = 1;
    while (3 * h + 1 < N) {
        h = 3 * h + 1;
    }
    while (h >= 1) {
        for (i = l + h; i <= r; i++) {
            j = i;
            x = numb[i];
            while (j >= l + h && x < numb[j - h]) {
                numb[j] = numb[j - h];
                j -= h;
            }
            numb[j] = x;
        }
        h = h / 3;
    }

    for (i = 0; i <= r; i++) {
        printf("Index: %d || Value: %d\n", i, numb[i]);
    }
}