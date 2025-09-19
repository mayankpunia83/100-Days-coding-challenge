#include <stdio.h>

int main()
{
    long long int num;
    int digit, sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
}
