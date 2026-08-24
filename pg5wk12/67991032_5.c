#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int order_id;
    Date delivery_date;
} Order;

int main() {
    Order order1 = {9876, {17, 8, 2026}};

    printf("Order ID: %d\n", order1.order_id);
    printf("Delivery Date: %02d/%02d/%04d\n", order1.delivery_date.day, order1.delivery_date.month, order1.delivery_date.year);

    return 0;
}