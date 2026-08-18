#include <stdio.h>

void asterisk_tree(int height) {
    for (int i = 1; i <= height; i++) {
        int spaces = height - i;
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2*i-1); k++) {
            printf("*");
        }
        if (i == height) {
            printf("\n");
            int trunk_spaces = height - 2;
            for (int x = 1; x <= trunk_spaces; x++) {
                printf(" ");
            }
            printf("***");
        }
        printf("\n");
    }
}
int main() {
    // Asterisk tree
    int input;
    printf("Enter the height of the tree (>= 3): ");
    scanf("%d", &input);
    asterisk_tree(input);
}