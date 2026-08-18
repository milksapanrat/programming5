#include <stdio.h>

int main() {
    int input;

    printf("Enter a number (1-9): ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        printf("%d", i);
    }
    for (int j = 1; j < input; j++) {
        printf("%d", input - j);
    }
}
