#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int c[6];

    c[0] = a[0];
    c[1] = a[1];
    c[2] = a[2];

    c[3] = b[0];
    c[4] = b[1];
    c[5] = b[2];

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
