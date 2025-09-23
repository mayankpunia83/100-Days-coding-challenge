#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        int count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
