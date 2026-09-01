#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int score;

    file = fopen("scores.dat", "a");

    if (file == NULL) {
        printf("File open failed!\n");
        return 1;
    }

    printf("Enter Name to append: ");
    scanf("%49s", name);

    printf("Enter Score to append: ");
    scanf("%d", &score);

    fprintf(file, "%s %d\n", name, score); //append to the file

    fclose(file);

    file = fopen("scores.dat", "r");

    if (file == NULL) {
        printf("File open failed!\n");
        return 1;
    }

    fscanf(file, "%49s %d", name, &score);

    printf("\nFirst entry in file: Name=%s, Score=%d\n", name, score);
    
    fclose(file);

    return 0;
}