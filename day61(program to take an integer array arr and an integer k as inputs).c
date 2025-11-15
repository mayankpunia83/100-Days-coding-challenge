#include <stdio.h>

int main() {
    int arr[100], n, k;

    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter window size k: ");
    scanf("%d", &k);

    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("0 ");
        }
    }

    return 0;
}
