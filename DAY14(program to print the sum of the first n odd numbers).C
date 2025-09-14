#include <stdio.h>

int main() {
    int n, i = 1, count = 0, sum = 0;

    printf("enter how many odd numbers to add\n");
    scanf("%d", &n);

    while (count < n) {
        sum = sum + i;
        i = i + 2;      // next odd number
        count = count + 1;
    }

    printf("sum of first %d odd numbers is %d\n", n, sum);

    return 0;
}
