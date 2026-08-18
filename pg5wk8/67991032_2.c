#include <stdio.h>

char arr[5];

void storearr() {
    printf("Enter 5 characters: ");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }
}

void sortarr() {
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Sorted array No. %d: %c\n", i + 1, arr[i]);
    }
}

int main() {
    storearr();
    sortarr();
    return 0;
}