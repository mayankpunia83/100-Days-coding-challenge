#include <stdio.h>

int main() {
    int n, x, sum = 0;

    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%d\n", sum - (n - 1) * (n - 2) / 2);
    return 0;
}
