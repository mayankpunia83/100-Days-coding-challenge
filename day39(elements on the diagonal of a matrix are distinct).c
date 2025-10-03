#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int a[n][n], diag[n], count = 0;

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        diag[i] = a[i][i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (diag[i] == diag[j])
            {
                count++;
            }
        }
    }

    if (count == 0)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
