#include <stdio.h>

struct ITEM {
    int id;
    char name[20];
    int quantity;
};

void initializeInventory(struct ITEM* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for Item %d (ID Name Qty): ", i + 1);
        scanf("%d %19s %d", &((arr + i)->id), (arr + i)->name, &((arr + i)->quantity));
    }
}

struct ITEM* findMostStocked(struct ITEM* arr, int size) {
    struct ITEM* mostStocked = arr;

    for (int i = 1; i < size; i++) {
        if ((arr + i)->quantity > mostStocked->quantity) {
            mostStocked = arr + i;
        }
    }
    return mostStocked;
}

int main() {
    struct ITEM items[3];

    initializeInventory(items, 3);

    struct ITEM* mostStockedItem = findMostStocked(items, 3);

    printf("\nMost Stocked Item: %s(ID: %d) with %d units\n", mostStockedItem->name, mostStockedItem->id, mostStockedItem->quantity);

    return 0;
}
