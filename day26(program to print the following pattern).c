#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5- i; j++) {
            printf(" ");
        }

        // Print numbers
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

