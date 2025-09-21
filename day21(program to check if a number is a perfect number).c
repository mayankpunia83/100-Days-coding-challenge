#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10) {
        printf("Not a perfect number\n");
        return 0;
    }

    for (int i = 1; i < num; i++)
        if (num % i == 0) sum += i;

    printf(sum == num ? "Perfect number\n" : "Not a perfect number\n");
    return 0;
}