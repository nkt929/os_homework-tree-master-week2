#include <stdio.h>

void swap(int *a, *b) {
    int c = *a; // swapping using temporary variable
    *a = *b;
    *b = c;
}

int ex4() {
    int a;
    int b;

    scanf("%d", &a); // reading values of variables
    scanf("%d", &b);

    printf("%d", a); // printing values of variables before swap calling
    printf("%c", ' ');
    printf("%d\n", b);

    swap(&a, &b); // calling swap function

    printf("%d", a); // printing values of variables after swap calling
    printf("%c", ' ');
    printf("%d\n", b);
}

