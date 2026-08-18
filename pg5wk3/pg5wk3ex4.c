#include <stdio.h>

int main() {
    int number;
    int target;

    printf("Enter a number between 0 and 20: ");
    scanf("%d", &number);

    target = 1032 % 2;

    if (number > target)
    {
        printf("Greater than the predetermined number.\n");
    }
    else if (number < target)
    {
        printf("Less than the predetermined number.\n");
    }
    else
    {
        printf("Correct\n");
    }

    return 0;
}