#include <stdio.h>

int main() {
    float cost, sell, profit, loss, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cost);

    printf("Enter Selling Price: ");
    scanf("%f", &sell);

    if(sell > cost) {
        profit = sell - cost;
        percent = (profit / cost) * 100;
        printf("Profit = %.2f%%\n", percent);
    }
    else if(cost > sell) {
        loss = cost - sell;
        percent = (loss / cost) * 100;
        printf("Loss = %.2f%%\n", percent);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
