#include <stdio.h>

void swap(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 15;
    int b = 40;

    printf("Before\nA = %d\nB = %d\n", a, b);
    swap(&a, &b);
    printf("After\nA = %d\nB = %d\n", a, b);

    return 0;
}