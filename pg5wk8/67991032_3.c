#include <stdio.h>

float piggybank() {
    float amount;
    printf("Please insert amount of money: ");
    scanf("%f", &amount);
    return amount;
}
int main() {
    float total = 0;
    float today;

    for (int day = 1; day <= 5; day++) {
        today = piggybank();
        total += today;
        printf("Today's money = %.2f | Total money = %.2f\n", today, total);
    }
    return 0;
}