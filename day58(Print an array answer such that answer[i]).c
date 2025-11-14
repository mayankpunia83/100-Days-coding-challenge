#include <stdio.h>
int main()
{
    int nums[4] = {1, 2, 3, 4};
    int n = 4;
    int a[4];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                a[i] *= nums[j];
            }
        }
    }
    printf("a\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
