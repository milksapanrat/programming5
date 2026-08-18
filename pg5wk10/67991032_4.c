#include <stdio.h>

int secondLargest(int *arr, int size) {
    int largest, secondLargest;

    if (*arr > *(arr + 1)) {
        largest = *arr;
        secondLargest = *(arr + 1);
    } else {
        largest = *(arr + 1);
        secondLargest = *arr;
    }

    for (int i = 2; i < size; i++) {
        if (*(arr + i) > largest) {
            secondLargest = largest;
            largest = *(arr + i);
        }
        else if (*(arr + i) > secondLargest) {
            secondLargest = *(arr + i);
        }
    }

    return secondLargest;
}

int main() {
    int arr[5] = {8, 15, 21, 5, 17};

    printf("Second Largest: %d\n", secondLargest(arr, 5));
    return 0;
}