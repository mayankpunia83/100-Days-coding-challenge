//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present
#include <stdio.h>

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    scanf("%d", &target);
    int first = -1, last = -1;
    int l = 0, r = n - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            r = mid - 1;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    l = 0;
    r = n - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            l = mid + 1;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}