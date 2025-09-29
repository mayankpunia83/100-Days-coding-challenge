#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, k = 2;
    int temp[100];

    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}