#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int temp;

    temp = arr[0];
    arr[0] = arr[3];
    arr[3] = temp;

    temp = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
