#include <stdio.h>

int main()
{
    int num, original, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}
