#include <stdio.h>
#include <string.h>

int main() {
    int numbers[3] = {10, 20, 30};
    int multiplier = 5;
    int total = 0;
    int *ptrA, *ptrB;

    ptrA = &numbers[1];
    ptrB = &multiplier;

    total = (*ptrA**ptrB) + *(ptrA + 1);
    printf("Total: %d\n", total);
    
    return 0;
}