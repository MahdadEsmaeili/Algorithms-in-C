// Quick union is another algorithm to solve the online connectivity
// problem. It's complexity for find is linear as it has to search a
// chain of nodes to find the root. but the union operation is constant
// and relatively simple. It is on average a better algorithm than quick find

#include <stdio.h>
#include <stdlib.h>
#define N 1000

void quickUnion();

int main(void) {
    //demo to see how it works:
    quickUnion();
    return EXIT_SUCCESS;
}

void quickUnion() {
    int i, j, p, q, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    printf("Input pair p q:\n");
    while (scanf("%d%d", &p, &q)== 2) {
        for (i = p; id[i] != i; i = id[i]);
        for (j = q; id[j] != j; j = id[j]);
        if (i == j)
            printf("%d %d already connected\n", p, q);
        else {
            id[i] = j;
            printf("pair %d %d not yet connected\n", p, q);
        }
        printf("Input pair p q:\n");
    }
}
