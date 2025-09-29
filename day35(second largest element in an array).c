#include <stdio.h>

int main()
{
    int arr[] = {10, 50, 20, 40};
    int n = 4;

    int max = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] > second && arr[i] < max)
            second = arr[i];

    printf("Second largest = %d", second);
    return 0;
}
