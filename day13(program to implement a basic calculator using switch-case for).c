#include <stdio.h>

int main() {
    int c, x, y, sum, sub, mul, div;

    printf("MENU\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. DIVISION\n");
    printf("4. MULTIPLICATION\n");

    printf("Enter your choice: ");
    scanf("%d", &c);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (c) {
        case 1:
            sum = x + y;
            printf("Sum = %d\n", sum);
            break;
        case 2:
            sub = x - y;
            printf("Subtraction = %d\n", sub);
            break;
        case 3:
            if (y != 0) {
                div = x / y;
                printf("Division = %d\n", div);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        case 4:
            mul = x * y;
            printf("Multiplication = %d\n", mul);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
