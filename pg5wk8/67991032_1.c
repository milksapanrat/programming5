#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    double arr2[] = {1.1, 2.2, 3.3, 4.4};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    // Display information for int array
    printf("Address of arr: %p\n", &arr);
    printf("Number of Elements in arr: %d\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        printf("Element %d: %d address at: %p\n", i, arr[i], &arr[i]);
    }

    // Display information for double array
    printf("Address of arr2: %p\n", &arr2);
    printf("Number of Elements in arr2: %d\n", arr2Size);
    for (int i = 0; i < arr2Size; i++) {
        printf("Element %d: %.1f address at: %p\n", i, arr2[i], &arr2[i]);
    }

    return 0;
}