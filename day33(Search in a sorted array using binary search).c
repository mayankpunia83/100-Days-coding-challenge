#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int target = 10, low = 0, high = 6, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            printf("Found at %d\n", mid);
            return 0;
        }
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found\n");
    return 0;
}
