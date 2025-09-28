#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40};
    int n = 4;
    int x = 25;
    int pos = 2;

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
