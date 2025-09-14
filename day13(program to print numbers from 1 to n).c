#include <stdio.h>

int main() {
    int n, i;

    printf("enter the number\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
