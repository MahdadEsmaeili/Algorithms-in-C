// Algorithm for binary search
// for using binary search, your array must be ordered
// the way it works is obvious by running the code and
// it is used because of it works with logarithmic complexity (log(n))

#include <stdlib.h>
#include <stdio.h>

void binarySearch(int v[], int N, int k);

int main(void) {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, N = 10, k = 2;
    //demo of binary search
    binarySearch(v, N, k);
    return 0;
}

void binarySearch(int v[], int N, int k) {
    int m, l = 0, r = N - 1, found = 0;
    while (l <= r && found == 0) {
        m = (l + r) / 2;

        printf("Window: l=%d, r=%d | Checking middle index %d (value: %d)\n", l, r, m, v[m]);
        if (v[m] == k)
            found = 1;
        else if (v[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    if (found == 1) {
        printf("-> Number found!\n");
    } else {
        printf("-> Number not found!\n");
    }
}
