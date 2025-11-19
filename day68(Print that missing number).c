#include <stdio.h>

int main() {
    int nums[100], n, sum = 0, total;
    
    scanf("%d", &n); 
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i]; 
    }

    total = n * (n + 1) / 2; 
    printf("%d\n", total - sum); 

    return 0;
}
