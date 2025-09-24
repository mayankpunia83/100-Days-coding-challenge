#include <stdio.h>

int main()
{
    int arr[5] = {10, 25, 5, 40, 15};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}
