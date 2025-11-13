#include <stdio.h>

int main() {
    int arr[5], n;
    scanf("%d", &n); 

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                printf("%d, ", arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 0)
            printf("-1, ");
    }

    return 0;
}
