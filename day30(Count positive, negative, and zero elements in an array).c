#include <stdio.h>

int main()
{
    int arr[5] = {3, -2, 0, 7, -5};
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);

    return 0;
}
