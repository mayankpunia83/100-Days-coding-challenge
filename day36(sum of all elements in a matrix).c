#include <stdio.h>

int main()
{
    int a[10][10], r, c, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
