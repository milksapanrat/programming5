#include <stdio.h>

int main() {
    int arr[8] = {12, 7, 25, 19, 4, 30, 18, 9};
    int sum = 0;
    int *ptr = arr; 
    int min = *ptr; // Initialize min to the first element of the array
    int even_count = 0;

    for (int i = 0; i < 8; i++) {
        sum += *ptr; 

        if (*ptr < min) {
            min = *ptr;
        }

        if (*ptr % 2 == 0) {
            even_count++;
        }

        ptr++;
    }
    printf("Sum: %d\n", sum);
    printf("Minimum: %d\n", min);
    printf("Even Numbers: %d\n", even_count);

    return 0;
}