#include <stdio.h>
#include <limits.h>
#include <float.h>

void ex1() {
    int i; // declaring integer, float and double variables
    float f;
    double d;

    i = INT_MAX; // assigning maximum values for each variable
    f = FLT_MAX;
    d = DBL_MAX;

    printf("%d\n", (int) sizeof(i)); // printing sizes of each variable
    printf("%d\n", (int) sizeof(f));
    printf("%d\n", (int) sizeof(d));

    printf("\n");

    printf("%d\n", i); // printing values of each variable
    printf("%f\n", f);
    printf("%f\n", d);
}