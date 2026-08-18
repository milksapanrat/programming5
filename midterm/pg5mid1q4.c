#include <stdio.h>

int main() {
    int inventory[3][5];
    int total;
    double average;

    // Input inventory data
    for (int i = 0; i < 3; i++) {
        printf("\nEnter items received for Product %d:\n", i + 1);

        for (int j = 0; j < 5; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &inventory[i][j]);
        }
    }

    // Summary Table
    printf("\n================ Inventory Summary ================\n");
    printf("---------------------------------------------------\n");
    printf("Product\tTotal Stock\tAverage/Day\tStatus\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        total = 0;

        // Calculate total stock
        for (int j = 0; j < 5; j++) {
            total += inventory[i][j];
        }

        // Calculate average
        average = (double) total / 5;

        // Print summary
        printf("%d\t%d\t\t%.2f\t\t", i + 1, total, average);

        if (total < 50) {
            printf("Low Stock Warning");
        } else {
            printf("OK");
        }

        printf("\n");
    }

    return 0;
}