//This is an optimization of quick union which results in
// the find operation complexity to be growing logarithmically
// how it works: it check the size of the connected components
// and add the smaller tree to the larger one.

#include <stdio.h>
#include <stdlib.h>
#define N 1000
void weightedQuickUnion();

int main(void) {
    //demo to see how it works:
    weightedQuickUnion();
    return EXIT_SUCCESS;
}

void weightedQuickUnion() {
    int i, j, p, q, id[N], size[N];
    for (i = 0; i < N; i++) id[i] = i, size[i] = 1;
    printf("Input pair p q: \n");
    while (scanf("%d%d", &p, &q)== 2) {
        for (i = p; id[i] != i; i = id[i]);
        for (j = q; id[j] != j; j = id[j]);
        if (i == j)
            printf("%d %d already connected\n", p, q);
        else {
            if (size[i] <= size[j]) {
                id[i] = j;
                size[j] += size[i];
            }
            else {
                id[j] = i;
                size[i] += size[j];
            }
            printf("pair %d %d not yet connected\n", p, q);
        }
        printf("Input pair p q:\n");
    }
}