#include <stdio.h>
#include <string.h>

void main() {
    char a[10] = "Nagashree";  // Input string
    int len = strlen(a);       // Length of the string
    int i, j;

    // Top part of the V
    for (i = 0; i < len; i++) {
        // Print leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print left character
        printf("%c", a[i]);

        // Print spaces between the two arms of the V
        for (j = 0; j < 2 * (len - i - 1) - 1; j++) {
            printf(" ");
        }

        // Print right character (if it's not the same as the left)
        if (i != len - 1) {
            printf("%c", a[len - i - 1]);
        }

        printf("\n");  // Move to the next line
    }
}
