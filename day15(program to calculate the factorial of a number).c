#include <stdio.h>

int main() {
    int n, i = 1, fact = 1;

    printf("enter the number\n");
    scanf("%d", &n);

    while (i <= n) {
        fact = fact * i;
        i = i + 1;
    }

    printf("factorial of %d is %d\n", n, fact);

    return 0;
}
