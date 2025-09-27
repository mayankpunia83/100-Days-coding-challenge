#include <stdio.h>

int main()
{
    int arr[100] = {2, 4, 6, 8, 10};
    int n = 5, x = 7, i;

    for (i = 0; i < n; i++)
        if (arr[i] > x)
            break;

    for (int j = n; j > i; j--)
        arr[j] = arr[j - 1];

    arr[i] = x;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}