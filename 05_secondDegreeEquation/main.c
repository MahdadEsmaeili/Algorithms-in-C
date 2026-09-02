// in this one we are gonna use scalar data types
// to solve 2nd degree equation with 2 different approach
// in one we are gonna use nested if construct and the other
// with non-nested if construct. sorry it's gonna be a relatively long one.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solNonNestedIf(float a, float b, float c);

void solNestedIf(float a, float b, float c);


int main(void) {
    float a, b, c;
    printf("Please insert the coefficients (a b c): ");
    scanf("%f%f%f", &a, &b, &c);
    // Demo run of Nested if conditions:
    printf("The part below is the demonstration of solution with nested if statements\n");
    solNestedIf(a, b, c);
    // Demo run of Non-Nested if conditions:
    printf("The part below is the demonstration of solution with non-nested if statements\n");
    solNonNestedIf(a, b, c);
    return EXIT_SUCCESS;
}


void solNonNestedIf(float a, float b, float c) {
    float x0, x1, delta, im, re;
    if (a == 0 && b == 0 && c == 0)
        printf("Indetermined equation!\n");
    if (a == 0 && b == 0 && c != 0)
        printf("Impossible equation!\n");
    if (a == 0 && b != 0) {
        printf("1st degree equation!\n");
        printf("Solution: %f\n", -c / b);
    }
    if (a != 0) {
        delta = (b * b) - (4 * a * c);
        if (delta == 0) {
            // for the sake of presentation we calculate both of them,
            //  but it is not necessary as both have the same value
            x0 = -b / (2 * a);
            x1 = -b / (2 * a);
            printf("2 real coincident solutions: %f\n", x0);
        }
        if (delta > 0) {
            x0 = (-b + sqrt(delta)) / (2 * a);
            x1 = (-b - sqrt(delta)) / (2 * a);
            printf("2 real distinct solutions: x0 = %f || x1 = %f\n", x0, x1);
        }
        if (delta < 0) {
            re = -b / (2 * a);
            im = sqrt(-delta) / (2 * a);
            printf("2 complex conjugate solutions: x0= %f-i*%f || x1= %f+i*%f\n", re, im, re, im);
        }
    }
}

void solNestedIf(float a, float b, float c) {
    float x0, x1, delta, re, im;
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Indetermined equation\n");
            else printf("Impossible equation\n");
        } else {
            printf("I degree equation\n ");
            printf("Solution: %f\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta == 0) {
            x0 = (-b) / (2 * a);
            x1 = (-b) / (2 * a);
            printf("2 real coincident solutions: ");
            printf("%f %f\n", x0, x1);
        } else /* if delta != 0 */
            if (delta > 0) {
                x0 = (-b - sqrt(delta)) / (2 * a);
                x1 = (-b + sqrt(delta)) / (2 * a);
                printf("2 real distinct solutions: x0 = %f || x1 = %f\n", x0, x1);
            } else {
                /* delta < 0 */
                re = -b / (2 * a);
                im = sqrt(-delta) / (2 * a);
                printf(" 2 complex conjugate:\n x0 = %f - i * %f x1 = %f + i * %f\n", re, im, re, im);
            }
    }
}
