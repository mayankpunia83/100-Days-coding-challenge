#include <stdio.h>

int main() {
    int arr[100];
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int max = 0;

    for (int i = 0; i <= n ; i++) {
        int s = 0;
        for (int j = 0; j < k; j++) {
            
        }
        if (s > max || i == 0) {
            max = s;
        }
    }

    printf("Max sum = %d\n", max);

    return 0;
}
