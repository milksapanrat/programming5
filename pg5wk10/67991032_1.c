#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr; // Pointer to the first element of the array

    for (int i = 0; i < 6; i++) {
        printf("Value: %d  Address: %p\n", *(ptr + i), ptr + i);
    }


    return 0;
}