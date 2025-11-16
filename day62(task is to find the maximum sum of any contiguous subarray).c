#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }

    printf("%d", max);
    return 0;
}
