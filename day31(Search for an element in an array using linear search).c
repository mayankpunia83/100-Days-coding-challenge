#include <stdio.h>

int main()
{
    int arr[5] = {4, 7, 2, 9, 5};
    int key = 9;
    int i;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("Found at index %d\n", i);
            break;
        }
    }

    if (i == 5)
        printf("Not found\n");

    return 0;
}
