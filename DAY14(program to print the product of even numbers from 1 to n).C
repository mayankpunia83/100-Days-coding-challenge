#include <stdio.h>

int main() {
    int n, i = 2, product = 1;

    printf("enter the number\n");
    scanf("%d", &n);

    while (i <= n) {
        product = product * i;
        i = i + 2;
    }

    printf("product of even numbers from 1 to %d is %d\n", n, product);

    return 0;
}
