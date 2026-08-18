#include <stdio.h>
#include <stdlib.h>

int main(void){
    int rows, columns;

    printf("How many rows do you want? ");
    scanf("%d", &rows);
    printf("How many columns do you want? ");
    scanf("%d", &columns);

    int **grid = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        grid[i] = malloc(columns * sizeof(int));
    }

    int number = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            grid[i][j] = number++;
        }
    }

    printf("--- My Magic Grid ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}