#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int i, j;

    for (int k = 0; k < 3; k++)
    {
        i = 0;
        j = k;
        while (i < 3 && j >= 0)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    for (int k = 1; k < 3; k++)
    {
        i = k;
        j = 2;
        while (i < 3 && j >= 0)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}