#include <stdio.h>

int main()
{
    int A[3][3] = {
        {2, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};

    int isSymmetric = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] != A[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
