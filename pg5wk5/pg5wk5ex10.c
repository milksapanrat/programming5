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
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Maximum element is : %d", max);
    printf("\nMinimum element is : %d", min);
}