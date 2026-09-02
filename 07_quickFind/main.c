// Online connectivity problem is a
// real problem to understand the impact of the choice
// of the algorithm and of the data structure on complexity
// and the quick find is one of the algorithm that is used
// to solve such problems -actually not used because it is
// very inefficient. in the next projects we will see better
//algorithms to solve the problem.

#include <stdio.h>
#include <stdlib.h>

#define N 10000
void quickFind();

int main(void) {
    quickFind();
    return EXIT_SUCCESS;
}

void quickFind() {
    int i, t, p, q, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    printf("Input pair p q:  ");
    while (scanf("%d %d", &p, &q) == 2) {
        if (id[p] == id[q])
            printf("%d % d already connected\n", p, q);
        else {
            for (t = id[p], i = 0; i < N; i++)
                if (id[i] == t)
                    id[i] = id[q];
            printf("pair %d %d not yet connected\n", p, q);
        }
        printf("Input pair p q: ");
    }
}
