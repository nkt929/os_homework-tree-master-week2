#include <stdio.h>
#include <memory.h>

int ex2() {
    char *s;
    printf("%s\n", "Enter the string:");
    scanf("%[^\n]", s); // reading the string

    int l = (int) strlen(s); // calculating length of a string
    int i;
    for(i = l - 1; i >= 0; i--) { // printing string from the end till its beginning
        printf("%c", s[i]);
    }
}