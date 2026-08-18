#include <stdio.h>

int main() {
    int number;

    printf("Enter a natural number: ");
    scanf("%d", &number);

    if (number % 2 == 1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }

    return 0;
}