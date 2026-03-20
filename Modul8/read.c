// Source: https://gist.github.com/ahmadnafi30/69fbe4ca9f51a1f8443c59b01f5b6791 
// Original author: @ahmadnafi30
// Modified for lab practicum purposes

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fh;
    int ch;
    fh = fopen("Praktikum_IX.txt", "r");

    if (fh == NULL) {
        puts("Can't open that file!");
        exit(1);
    }

    while ((ch = fgetc(fh)) != EOF)
        putchar(ch);

    fclose(fh);

    return (0);
}