#include <stdio.h>

int main()
{
    int arr[5] = {2, 5, 8, 9, 12};
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
