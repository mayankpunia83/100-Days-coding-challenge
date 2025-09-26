#include <stdio.h>

int main()
{
    int num, digit;
    int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit == 0)
            d0++;
        else if (digit == 1)
            d1++;
        else if (digit == 2)
            d2++;
        else if (digit == 3)
            d3++;
        else if (digit == 4)
            d4++;
        else if (digit == 5)
            d5++;
        else if (digit == 6)
            d6++;
        else if (digit == 7)
            d7++;
        else if (digit == 8)
            d8++;
        else if (digit == 9)
            d9++;
        num /= 10;
    }

    printf("Digit counts:\n");
    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n",
           d0, d1, d2, d3, d4, d5, d6, d7, d8, d9);

    return 0;
}
