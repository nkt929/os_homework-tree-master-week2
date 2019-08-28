#include <stdio.h>

int ex3(int args, char* argv[]) {
    int n;
    if (sscanf(argv[1], "%d", &n) != 1)
    {
        return 1;
    }
    int height = n; // calculating height and width of the triangle
    int width = 2 * n + 1;

    int i;
    for (i = 1; i <= height * 2; i = i + 2) { // cycle for each level of trinngle
        int j;
        int p = (width - i) / 2; // calculating amount of spaces on the left, printing them
        for (j = 1; j <= p; j++) {
            printf("%c", ' ');
        }

        int z;
        for (z = 1; z <= i; z++) { // calculating amount of stars, printing them
            printf("%c", '*');
        }

        for (j = 1; j <= p; j++) { // calculating amount of spaces on the right, printing them
            printf("%c", ' ');
        }
        printf("\n");
    }
}
