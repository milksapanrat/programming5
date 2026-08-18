#include <stdio.h>
int main() {
    int size;
    int max = 0;
    int min = 0;

    printf("Input the size of the array : ");
    scanf("%d", &size);

    int a[size];

    printf("Enter %d elements in the array :\n", size);
    for(int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);

    }
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order :\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}